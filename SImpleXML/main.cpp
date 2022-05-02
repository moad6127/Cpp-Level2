#include<iostream>
#include<vector>
#include<string>

#include"tinyxml2.h"
#include"monster.h"

using namespace tinyxml2;

bool LoadFromXML(std::string filename, std::vector<Monster>& monsters)
{
	XMLDocument doc;
	if (doc.LoadFile(filename.c_str()) != XML_SUCCESS)
	{
		std::cout << "Can't not find file " << filename << std::endl;
		return false;
	}
	auto pRootNode = doc.FirstChildElement("monsters");

	for (auto pMonsterNode = pRootNode->FirstChildElement();
		pMonsterNode;
		pMonsterNode = pMonsterNode->NextSiblingElement())
	{
		Monster monster;
		monster.SetName(pMonsterNode->Attribute("name"));
		Status status;
		auto pStatusNode = pMonsterNode->FirstChildElement("status");
		status.mLevel = (pStatusNode->IntAttribute("level"));
		status.mHP = (pStatusNode->IntAttribute("hp"));
		status.mMP = (pStatusNode->IntAttribute("mp"));
		monster.SetStatus(status);
		

		auto pItemsNode = pMonsterNode->FirstChildElement("items");
		for (auto pItemNode = pItemsNode->FirstChildElement();
			pItemNode;
			pItemNode = pItemNode->NextSiblingElement())
		{
			Item item;
			item.mName = pItemNode->Attribute("name");
			item.mGold = pItemNode->IntAttribute("gold");

			monster.AddItem(item);
		}
		monsters.push_back(monster);
	}

	return true;
}

int main()
{
	std::vector<Monster> monsters;

	LoadFromXML("data/mydata.xml", monsters);
}