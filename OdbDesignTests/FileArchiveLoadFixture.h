#pragma once

#include "gtest/gtest.h"
#include <filesystem>
#include "OdbDesign.h"
#include <memory>
#include <string>

namespace Odb::Test
{
	class FileArchiveLoadFixture : public ::testing::Test
	{
	public:		
		FileArchiveLoadFixture();

	protected:
		std::filesystem::path m_testDataDir;
		std::unique_ptr<Odb::Lib::App::DesignCache> m_pDesignCache;
		
		const bool m_removeDecompressedDirectories = true;

		void SetUp() override;
		void TearDown() override;

		std::string getTestDataDir();				
		std::filesystem::path getDesignPath(const std::string& filename) const;

	};
}
