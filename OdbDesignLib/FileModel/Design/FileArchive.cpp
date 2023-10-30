#include "FileArchive.h"
#include "FileArchive.h"
#include <filesystem>
#include "ArchiveExtractor.h"
#include "MiscInfoFile.h"
#include <iostream>
#include "Logger.h"

using namespace Utils;
using namespace std::filesystem;

namespace Odb::Lib::FileModel::Design
{

	FileArchive::FileArchive(std::string path)
		: m_filePath(path)
	{
	}

	FileArchive::~FileArchive()
	{
	}

	std::string FileArchive::GetRootDir() const
	{
		return m_rootDir;
	}

	std::string FileArchive::GetProductName() const
	{
		return m_productName;
	}

	std::string FileArchive::GetFilePath() const
	{
		return m_filePath;
	}

	std::string FileArchive::GetFilename() const
	{
		//return m_filename;
		return path(m_filePath).filename().string();
	}

	const StepDirectory::StringMap& FileArchive::GetStepsByName() const
	{ 
		return m_stepsByName;
	}

	bool FileArchive::ParseFileModel()
	{
		try
		{
			if (!exists(m_filePath)) return false;

			auto started = std::chrono::system_clock::now();
		
			if (is_regular_file(m_filePath))
			{
				std::filesystem::path extractedPath;
				if (! ExtractDesignArchive(m_filePath, extractedPath)) return false;

				m_rootDir = findRootDir(extractedPath);
			}			
		
			if (is_directory(m_rootDir))
			{
				loginfo("Parsing... ");

				if (ParseDesignDirectory(m_rootDir))
				{
					auto finished = std::chrono::system_clock::now();
					auto elapsed = finished - started;
					auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(elapsed).count();
					double s = ms / 1000.0;
					loginfo("Successfully parsed. (" + std::to_string(s) + " ms)");

					return true;
				}
				else
				{
					loginfo("Parsing failed.");
				}
			}		
		}
		catch (std::exception& e)
		{
			logexception(e);
			throw e;
		}

		return false;
	}

	bool FileArchive::ExtractDesignArchive(const std::filesystem::path& path, std::filesystem::path& extractedPath)
	{
		loginfo("Extracting... ");

		if (!Utils::ArchiveExtractor::IsArchiveTypeSupported(path)) return false;

		Utils::ArchiveExtractor extractor(path.string());
		if (!extractor.Extract()) return false;

		auto extracted = std::filesystem::path(extractor.GetExtractionDirectory());
		if (!exists(extracted)) return false;

		extractedPath = extracted;

		loginfo("Successfully extracted.");

		return true;
				
	}

	/*static*/ std::string FileArchive::findRootDir(const path& extractedPath)
	{
		if (pathContainsTopLevelDesignDirs(extractedPath))
		{
			return extractedPath.string();
		}
		else
		{
			for (const auto& p : directory_iterator(extractedPath))
			{
				if (is_directory(p))
				{
					if (pathContainsTopLevelDesignDirs(p.path()))
					{
						return p.path().string();
					}
				}
			}

			return "";
		}
	}

	/*static*/ bool FileArchive::pathContainsTopLevelDesignDirs(const std::filesystem::path& path)
	{
		for (const auto& topLevelRootDirName : TOPLEVEL_DESIGN_DIR_NAMES)
		{
			auto rootLevelDirPath = path / topLevelRootDirName;
			if (!exists(rootLevelDirPath)) return false;
		}
		return true;
	}

	bool FileArchive::ParseDesignDirectory(const std::filesystem::path& path)
	{
		if (!exists(path)) return false;
		else if (!is_directory(path)) return false;

		m_productName = path.stem().string();

		loginfo("Parsing steps...");

		auto stepsPath = path / "steps";
		for (auto& d : directory_iterator(stepsPath))
		{
			if (is_directory(d))
			{
				auto pStep = std::make_shared<StepDirectory>(d.path());
				if (pStep->Parse())
				{
					m_stepsByName[pStep->GetName()] = pStep;
				}
				else
				{
					return false;
				}
			}
		}

		loginfo("Parsing steps complete");		

        if (! ParseMiscInfoFile(path)) return false;
		if (! ParseMatrixFile(path)) return false;
		if (! ParseStandardFontsFile(path)) return false;		

		return true;
	}

    bool FileArchive::ParseMiscInfoFile(const path& path)
    {
		loginfo("Parsing misc/info file...");

        auto miscDirectory = path / "misc";
        if (!exists(miscDirectory)) return false;
        if (!is_directory(miscDirectory)) return false;

        if (!m_miscInfoFile.Parse(miscDirectory)) return false;

		loginfo("Parsing misc/info file complete");

        return true;
    }

	bool FileArchive::ParseMatrixFile(const std::filesystem::path& path)
	{
		loginfo("Parsing matrix/matrix file...");

		auto matrixDir = path / "matrix";
		if (!exists(matrixDir)) return false;
		if (!is_directory(matrixDir)) return false;

		if (!m_matrixFile.Parse(matrixDir)) return false;

		loginfo("Parsing matrix/matrix file complete");

		return true;
	}
	bool FileArchive::ParseStandardFontsFile(const std::filesystem::path& path)
	{
		loginfo("Parsing fonts/standard file...");

		auto fontsDir = path / "fonts";
		if (!exists(fontsDir)) return false;
		if (!is_directory(fontsDir)) return false;

		if (!m_standardFontsFile.Parse(fontsDir)) return false;

		loginfo("Parsing fonts/standard file complete");

		return true;
	}

    const MiscInfoFile &FileArchive::GetMiscInfoFile() const
    {
        return m_miscInfoFile;
    }

	const MatrixFile& FileArchive::GetMatrixFile() const
	{
		return m_matrixFile;
	}

	const StandardFontsFile& FileArchive::GetStandardFontsFile() const
	{
		return m_standardFontsFile;
	}

    //const EdaDataFile& FileModel::GetStepEdaDataFile(std::string stepName) const
	//{		
	//	auto findIt = m_stepsByName.find(stepName);
	//	if (findIt != m_stepsByName.end())
	//	{
	//		return findIt->second->GetEdaDataFile();
	//	}
	//	else
	//	{
	//		return EdaDataFile::EMPTY;
	//	}		
	//}

	//const EdaDataFile& FileModel::GetFirstStepEdaDataFile() const
	//{
	//	if (!m_stepsByName.empty())
	//	{
	//		return m_stepsByName.begin()->second->GetEdaDataFile();
	//	}
	//	else
	//	{
	//		return EdaDataFile::EMPTY;
	//	}
	//}
}