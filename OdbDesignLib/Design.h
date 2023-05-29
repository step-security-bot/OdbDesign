#pragma once

#include "export.h"
#include <string>
#include <memory>
#include "Net.h"
#include "Component.h"
#include "FileModel.h"
#include "Via.h"
#include "Package.h"


namespace Odb::Lib::ProductModel
{
	class DECLSPEC Design
	{
	public:	
		Design();
		~Design();

		bool Build(std::string designDirectory);
		bool Build(std::shared_ptr<FileModel::Design::FileModel> pFileModel);

	private:
		std::string m_productModel;
		std::string m_name;

		std::string m_designDirectory;		
		std::shared_ptr<FileModel::Design::FileModel> m_pFileModel;

		Net::Vector m_nets;
		Net::StringMap m_netsByName;

		Package::Vector m_packages;
		Package::StringMap m_packagesByName;

		Component::Vector m_components;
		Component::StringMap m_componentsByName;		

		bool Build();
		bool BuildComponents();
		bool BuildNets();
		bool BuildPackages();
		bool BuildPlacements();

	};
}
