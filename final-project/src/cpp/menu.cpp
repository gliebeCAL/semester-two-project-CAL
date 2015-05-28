// ------------------------------------------------
// Project Title:	Project Ysgramor
// Author:		Joey Gliebe
// Started:		04-06-15
// Version:		0.1
// Description:		A text-based adventure game
// ------------------------------------------------
// Filename: 		menu.cpp
// Created: 		04-27-15
// Description: 	Display a menu and accept
// 			options
// ------------------------------------------------

// Headers-----------------------------------------

extern "C"
{
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

#include <iostream>
#include <string>
#include <cstdlib>

// End Headers-------------------------------------

extern int g_partyCurrentHealth;
extern int g_partyMaxHealth;
extern int g_partyMoney;
extern int g_partyArmorStatus;
extern int g_partyPotionCount;

void mainMenuDisplay() // Outputs the main menu
{
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./mainmenu.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";
}

char menuSelection(char answer) // Used to grab the player's selection
{
	std::string userAnswer;
	std::getline(std::cin, userAnswer);

	answer = userAnswer[0];

	return answer;
}

void inventoryStatusDisplay() // Displays Inventory and Current stats/equipment
{
	std::string armorType;
	if (g_partyArmorStatus == 0)
	{
		armorType = "Battered Travel Armor";
	}
	
	else if (g_partyArmorStatus == 1)
	{
		armorType = "Decent Traveling Armor";
	}
	
	else if (g_partyArmorStatus == 2)
	{
		armorType = "Resilent Steel Armor";
	}
	
	else
	{
		std::cout << "ERROR ERROR: Armor Value broken!  Exiting...";
		std::exit(0);
	}

	std::cout << "Health: " << g_partyCurrentHealth << "/" << g_partyMaxHealth;
	std::cout << "\n\nGold: " << g_partyMoney;
	std::cout << "\n\nArmor: " << armorType;
	std::cin.ignore();
}
