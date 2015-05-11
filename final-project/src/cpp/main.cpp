// ------------------------------------------------
// Project Title:	Project Ysgramor
// Author:		Joey Gliebe
// Started:		04-06-15
// Version:		0.0
// Description:		A text-based adventure game
// ------------------------------------------------
// Filename: 		main.cpp
// Created: 		04-27-15
// Description: 	main loop of the program
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

// ---------------------------------------------------------------------------------------------------------------------------
// lua_State* L = luaL_newstate();	// This loads a new state
// luaL_openlibs(L); 			// This loads the standard libraries used in Lua for various operations
// luaL_dofile(L,"test.lua");		// This runs a file in the specified state (eg. L)
// lua_close(L); 			// This destroys the lua state.  Usually not necessary, but safer than not
//
// The above is being kept for future reference
// ---------------------------------------------------------------------------------------------------------------------------
// Lua states need to be used within a function.  They do not work out of scope, which means it would have to be made global.
// However, it is just safer to create a state for whatever function needs it, then closing it.
// ---------------------------------------------------------------------------------------------------------------------------

void startUp()
{
	using namespace std;

	clearScreen();
	mainMenuDisplay();

	// ISSUE 1: else loops repeatedly when multiple incorrect responses given
	// CAUSE: When multiple responses are given at once, it causes the system to accept multiple values, which
	// 	causes it to check for both in the function
	// SOLUTION: I made cin stream to a string variable, then set a char variable to the first character in the
	// 	string array, which then would only send one value

	char answer;

	tryAgain:

	answer = menuSelection(answer);

	if (answer == 'a')
	{
		cout << "You are playing the game!! NOTE: change this out with something else later...\n\n";
	}
	else if (answer == 'b')
	{
		// shutDown();
	}
	else
	{
		cout << "Please!  Don't do this to me; just try again:\n\n}> ";
		goto tryAgain;
	}
}

// void shutdown()

int main()
{
	startUp();
	
	return 0;
}
