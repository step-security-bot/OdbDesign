#include "FileArchive.h"
#include <filesystem>
#include "ArchiveExtractor.h"
#include "MiscInfoFile.h"
#include <iostream>
#include "Logger.h"

using namespace Utils;

namespace Odb::Lib::FileModel::Design
{

	FileArchive::FileArchive(std::string path)
		: m_path(path)
	{
	}

	FileArchive::~FileArchive()
	{
	}

	std::string FileArchive::GetPath() const
	{
		return m_path;
	}

	std::string FileArchive::GetProductName() const
	{
		return m_productName;
	}

	const StepDirectory::StringMap& FileArchive::GetStepsByName() const { return m_stepsByName; }

	bool FileArchive::ParseFileModel()
	{
		try
		{
			std::filesystem::path path(m_path);

			if (!std::filesystem::exists(path)) return false;
		
			if (std::filesystem::is_regular_file(path))
			{
				std::filesystem::path extractedPath;
				if (! ExtractDesignArchive(path, extractedPath)) return false;
				path = extractedPath;
			}			
		
			if (std::filesystem::is_directory(path))
			{
				Logger::instance()->info(" - Parsing... ");

				if (ParseDesignDirectory(path))
				{
					Logger::instance()->info("success.");
					return true;
				}
			}		
		}		
		catch (std::filesystem::filesystem_error& fe)
		{
			Logger::instance()->exception(fe);
		}
		catch (std::exception& e)
		{
			Logger::instance()->exception(e);
		}

		return false;
	}

	bool FileArchive::ExtractDesignArchive(const std::filesystem::path& path, std::filesystem::path& extractedPath)
	{
		Logger::instance()->info(" - Extracting... ");

		if (!Utils::ArchiveExtractor::IsArchiveTypeSupported(path)) return false;

		Utils::ArchiveExtractor extractor(path.string());
		if (!extractor.Extract()) return false;

		auto extracted = std::filesystem::path(extractor.GetExtractedPath());
		if (!std::filesystem::exists(extracted)) return false;
		
		extractedPath = extracted;

		Logger::instance()->info("success.");

		return true;
				
	}

	bool FileArchive::ParseDesignDirectory(const std::filesystem::path& path)
	{
		if (!std::filesystem::exists(path)) return false;
		else if (!std::filesystem::is_directory(path)) return false;

		m_productName = path.filename().string();

		auto stepsPath = path / "steps";
		for (auto& d : std::filesystem::directory_iterator(stepsPath))
		{
			if (std::filesystem::is_directory(d))
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

        if (! ParseMiscInfoFile(path)) return false;
		if (! ParseMatrixFile(path)) return false;

		return true;
	}

    bool FileArchive::ParseMiscInfoFile(const std::filesystem::path& path)
    {
        auto miscDirectory = path / "misc";
        if (!std::filesystem::exists(miscDirectory)) return false;
        if (!std::filesystem::is_directory(miscDirectory)) return false;

        if (!m_miscInfoFile.Parse(miscDirectory)) return false;

        return true;
    }

	bool FileArchive::ParseMatrixFile(const std::filesystem::path& path)
	{
		auto matrixDir = path / "matrix";
		if (!std::filesystem::exists(matrixDir)) return false;
		if (!std::filesystem::is_regular_file(matrixDir)) return false;

		if (!m_matrixFile.Parse(matrixDir)) return false;

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