// ------------------------------------------------
// Project Title:	Project Ysgramor
// Author:		Joey Gliebe
// Started:		04-06-15
// Version:		0.0
// Description:		A text-based adventure game
// ------------------------------------------------
// Filename: 		menu.cpp
// Created: 		04-27-15
// Description: 	Display a menu and accept
// 			options
// ------------------------------------------------

extern "C"  // Include lua headers
{
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

#include <iostream>
#include <string>

void mainMenuDisplay() // Outputs the main menu
{
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./mainmenu.lua");
	lua_close(L);

	std::cout << "\nSELECTION: }> ";
}

char menuSelection(char answer)
{
	using namespace std;

	std::string userAnswer;
	std::getline(std::cin, userAnswer);

	answer = userAnswer[0];

	return answer;
}
