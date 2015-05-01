//////////////////////////////////////////////////////
// Project Title:	Project Ysgramor            //
// Author:		Joey Gliebe                 //
// Started:		04-06-15                    //
// Version:		0.0                         //
// Description:		A text-based adventure game //
// ------------------------------------------------ //
// Filename: 		main.cpp                    //
// Created: 		04-27-15                    //
// Description: 	main loop of the program    //
//////////////////////////////////////////////////////

// NOTE: If #includes get heavy, make headers

extern "C"  // Include lua headers
{
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
}

int main()
{
	/* lua_State* L = luaL_newstate();	// This loads a new state */
	/* luaL_openlibs(L);			// This loads the standard libraries used in Lua for various operations */
	/* luaL_dofile(L,"test.lua");		// This runs a file in the specified state eg. L */
	/* lua_close(L); 			// This destroys the lua state.  Usually not necessary, but safer than not */
	// The above is being kept for future reference


	return 0;
}
