#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include "CommandLineArgs.h"
#include <exception>
#include <stdexcept>
#include "str_trim.h"
#include <sstream>


namespace Utils
{
	CommandLineArgs::CommandLineArgs(int argc, char* argv[])
	{
		// save arguments in std::string vector
		for (int i = 0; i < argc; i++)
		{
			m_vecArguments.push_back(argv[i]);
		}
		parse();
	}

	CommandLineArgs::CommandLineArgs(const std::vector<std::string>& vecArgv)
		: m_vecArguments(vecArgv)
	{
		parse();
	}

	bool CommandLineArgs::boolArg(const std::string& name, bool default) const
	{
		auto strB = getArgValue(name);
		if (strB.length() > 0)
		{
			bool b;
			std::istringstream(strB) >> std::boolalpha >> b;
			return b;
		}

		return default;
	}

	std::string CommandLineArgs::stringArg(const std::string& name, const std::string& default) const
	{
		auto str = getArgValue(name);
		if (str.length() > 0)
		{
			return str;
		}
		return default;
	}

	int CommandLineArgs::intArg(const std::string& name, int default) const
	{
		auto strI = getArgValue(name);
		if (strI.length() > 0)
		{
			return std::stoi(strI);
		}
		return default;
	}

	double CommandLineArgs::doubleArg(const std::string& name, double default) const
	{
		auto strD = getArgValue(name);
		if (strD.length() > 0)
		{
			return std::stod(strD);
		}
		return default;
	}

	std::string CommandLineArgs::executable() const
	{
		return getArgValue(EXECUTABLE_ARG_NAME);
	}

	std::filesystem::path CommandLineArgs::executableDirectory() const
	{
		return std::filesystem::path(executable()).parent_path().string();
	}

	std::filesystem::path CommandLineArgs::executableName() const
	{
		return std::filesystem::path(executable()).filename().string();
	}

	std::string CommandLineArgs::getArgValue(const std::string& name) const
	{
		auto findIt = m_mapArguments.find(name);
		if (findIt == m_mapArguments.end()) return "";
		return findIt->second;		
	}

	void Utils::CommandLineArgs::parse()
	{
		for (std::size_t i = 0; i < m_vecArguments.size(); i++)
		{
			auto& arg = m_vecArguments[i];
			if (arg.length() > 0)
			{
				if (i == 0)
				{
					m_mapArguments["executable"] = arg;
				}
				else if (arg[0] == '-' || arg[0] == '/')
				{
					Utils::str_ltrim(arg, '-');
					Utils::str_ltrim(arg, '/');

					std::string nextArg;
					if (i + 1 < m_vecArguments.size())
					{
						nextArg = m_vecArguments[i + 1];
					}

					if (nextArg.length() > 0 && 
						nextArg[0] != '-' && 
						nextArg[0] != '/')
					{
						m_mapArguments[arg] = nextArg;
						i++;
					}
					else
					{
						m_mapArguments[arg] = "true";
					}

					//if (i + 1 < m_vecArguments.size() &&
					//	m_vecArguments[i + 1].length() > 0 &&
					//	(m_vecArguments[i + 1][0] != '-' || m_vecArguments[i + 1][0] != '/'))
					//{
					//	
					//	m_mapArguments[arg] = m_vecArguments[i+++1];						
					//}
					//else
					//{						
					//	m_mapArguments[arg] = "true";
					//}						
				}				
			}
		}
	}
}