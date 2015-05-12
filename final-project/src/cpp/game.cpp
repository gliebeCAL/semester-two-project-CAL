// ------------------------------------------------
// Project Title:	Project Ysgramor
// Author:		Joey Gliebe
// Started:		04-06-15
// Version:		0.0
// Description:		A text-based adventure game
// ------------------------------------------------
// Filename: 		game.cpp
// Created: 		05-11-15
// Description: 	All main game interactions
// 			occur here.  For instance,
// 			it would handle areas, etc.
// ------------------------------------------------

extern "C"  // Include lua headers
{
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

#include <iostream>
#include "menu.h"
#include "clearScreen.h"

// CREATE A HEADER FILE SO EVERYTHING IS ALREADY DECLARED, WHICH WILL MAKE CALLING OTHER FUNCTOINS EASIER

// void map() // allows access to all the other areas
// {
// }
//
// void shop() // place to get more equipment and items
// {
// }
//
// void area1() // first area
// {
// }
//
// void area2() // second area
// {
// }
//
// void area...
//
// void areaFinal() // final area of the game
// {
// }
//
// void areaHub() // the town you get stuff from
// {
// }

void beginingScene() // This is the initial scene that the player starts in.  This should only be accessed once
{
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
		std::cout << "You go to the map...";
	}

	else if (answer == 'b') // go to store.lua
	{
		std::cout << "You go to the store...";
	}

	else if (answer == 'c')
	{
		std::cout << "You check your status and inventory";
	}

	else
	{
		std::cout << "\nINVALID; TRY AGAIN: }> ";
		goto TRYAGAIN;
	}
}
