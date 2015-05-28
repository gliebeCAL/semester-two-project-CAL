// ------------------------------------------------
// Project Title:	Project Ysgramor
// Author:		Joey Gliebe
// Started:		04-06-15
// Version:		0.1
// Description:		A text-based adventure game
// ------------------------------------------------
// Filename: 		game.cpp
// Created: 		05-11-15
// Description: 	All main game interactions
// 			occur here.  For instance,
// 			it would handle areas, etc.
// ------------------------------------------------

// Headers-----------------------------------------

extern "C"
{
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

#include <iostream>
#include <cstdlib>
#include <string>
#include "menu.h"
#include "clearScreen.h"
#include "game.h"
#include "battle.h"

// Global Variables--------------------------------

extern int g_partyCurrentHealth;
extern int g_partyMaxHealth;
extern int g_partyMoney;
extern int g_partyArmorStatus;
extern int g_partyPotionCount;

void map() // allows access to all the other areas
{
BACKTOSTART:
	clearScreen();

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./locations/map.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";

	char answer;

TRYAGAIN:

	answer = menuSelection(answer);

	if (answer == 'a') // first area
	{
		std::cout << "You head into the nearby forest... Press <Enter>";
		std::cin.ignore();
		area1();
	}

	else if (answer == 'b') // final area
	{
		std::cout << "You begin the trek to the dark Fort Aswyrd... Press <Enter>";
		std::cin.ignore();
		areaFinal();
	}

	else if (answer == 'c') // Return to town
	{
		std::cout << "You return to town... Press <Enter>";
		std::cin.ignore();
		town();
	}

	else if (answer == 'd') // Exits game
	{
		std::cout << "Exiting...";
		std::exit(0);
	}
	
	else if (answer == 'z') // Secret Cheat
	{
		std::cout << "As you stare at the map, you realize that there is ten thousand gold pieces hidden behind the map.  Score!";
		g_partyMoney += 100000;
		goto BACKTOSTART;
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
}

void shop() // place to get more equipment and items
{
BACKTOSHOP:
	clearScreen();

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./locations/store.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";

	char answer;

TRYAGAIN:

	answer = menuSelection(answer);

	if (answer == 'a') // Buy Potion
	{
		if (g_partyMoney >= 100)
		{
			std::cout << "You buy a potion... Press <Enter>";
			std::cin.ignore();
			g_partyPotionCount += 1;
			g_partyMoney -= 100;
			goto BACKTOSHOP;
		}
		
		else if (g_partyMoney < 100)
		{
			std::cout << "Sorry, you can't afford that...";
			std::cin.ignore();
			goto BACKTOSHOP;
		}
	}

	else if (answer == 'b') // Buy EQP 1
	{
		if (g_partyMoney >= 1000)
		{
			std::cout << "You buy Equipment for everyone; should be enough for now... Press <Enter>";
			std::cin.ignore();
			g_partyArmorStatus = 1;
			g_partyMoney -= 1000;
			goto BACKTOSHOP;
		}

		else if (g_partyMoney < 1000)
		{
			std::cout << "Sorry, you can't afford that...";
			std::cin.ignore();
			goto BACKTOSHOP;
		}
	}

	else if (answer == 'c') // Buy EQP 2
	{
		if (g_partyMoney >= 100000)
		{
			std::cout << "You buy heavy duty equipment, the finest this town can provide... Press <Enter>";
			std::cin.ignore();
			g_partyArmorStatus = 2;
			g_partyMoney -= 100000;
			goto BACKTOSHOP;
		}

		else if (g_partyMoney < 100000)
		{
			std::cout << "Sorry, you can't afford that...";
			std::cin.ignore();
			goto BACKTOSHOP;
		}
	}

	else if (answer == 'd') // Show Status/Inventory
	{
		std::cout << "You look at your staus and inventory... Press <Enter>";
		std::cin.ignore();
		inventoryStatusDisplay();
		goto BACKTOSHOP;
	}

	else if (answer == 'e') // Leave
	{
		std::cout << "You leave the shop, feeling more prepared by simply entering the establishment... Press <Enter>";
		std:: cin.ignore();
		town();
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
}

void area1() // first area
{
BACKTOSTART:
	clearScreen();

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./locations/area1.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";

	char answer;

	TRYAGAIN:

	answer = menuSelection(answer);

	if (answer == 'a') // battle wolf
	{
		std::cout << "You begin to search the forest, when a wild wolf appears... Press <Enter>";
		std::cin.ignore();
		std::string areaCurrent = "forest";
		battle(areaCurrent);
	}

	else if (answer == 'b') // Display stats and inventory
	{
		std::cout << "You check your status and inventory... Press <Enter>";
		std::cin.ignore();
		inventoryStatusDisplay();
		goto BACKTOSTART;
	}

	else if (answer == 'c') // Return to map
	{
		std::cout << "You head out for your next destination... Press <Enter>";
		std::cin.ignore();
		map();
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
	
}

void areaFinal() // final area
{
BACKTOSTART:
	clearScreen();

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./locations/areaFinal.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";

	char answer;

	TRYAGAIN:

	answer = menuSelection(answer);

	if (answer == 'a') // battle boss
	{
		std::cout << "You mentally prepare yourself, and lunge forward... Press <Enter>";
		std::cin.ignore();
		std::string areaCurrent = "fort";
		battle(areaCurrent);
	}

	else if (answer == 'b') // Display stats and inventory
	{
		std::cout << "You check your status and inventory... Press <Enter>";
		std::cin.ignore();
		inventoryStatusDisplay();
		goto BACKTOSTART;
	}

	else if (answer == 'c') // Return to map
	{
		std::cout << "You turn tail and retreat... Press <Enter>";
		std::cin.ignore();
		map();
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
}

void town() // Town
{
	BACKTOSTART:
	
	clearScreen();

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./locations/town.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";

	char answer;

	TRYAGAIN:

	answer = menuSelection(answer);

	if (answer == 'a') // go to map.lua
	{
		std::cout << "You head out for your next destination... Press <Enter>";
		std::cin.ignore();
		map();
	}

	else if (answer == 'b') // go to store.lua
	{
		std::cout << "You go to the store... Press <Enter>";
		std::cin.ignore();
		shop();
	}

	else if (answer == 'c') // Display the stats
	{
		std::cout << "You check your status and inventory... Press <Enter>";
		std::cin.ignore();
		inventoryStatusDisplay();
		goto BACKTOSTART;
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
}

void gameStart() // Initial start (a clone of town() location).  Only here once for the story.
{
	BACKTOSTART:
	
	clearScreen();

	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./locations/intro.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";

	char answer;

	TRYAGAIN:

	answer = menuSelection(answer);

	if (answer == 'a') // go to map.lua
	{
		std::cout << "You go to the map... Press <Enter>";
		std::cin.ignore();
		map();
	}

	else if (answer == 'b') // go to store.lua
	{
		std::cout << "You go to the store... Press <Enter>";
		std::cin.ignore();
		shop();
	}

	else if (answer == 'c') // Display the stats
	{
		std::cout << "You check your status and inventory... Press <Enter>";
		std::cin.ignore();
		inventoryStatusDisplay();
		goto BACKTOSTART;
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
}
