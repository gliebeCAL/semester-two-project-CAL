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

void beginingScene()
{
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L,"./places/start.lua");
	lua_close(L);

	char answer;

	menuSelection(answer);
}
