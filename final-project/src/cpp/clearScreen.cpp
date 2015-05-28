// ------------------------------------------------
// Project Title:	Project Ysgramor
// Author:		Joey Gliebe
// Started:		04-06-15
// Version:		0.0
// Description:		A text-based adventure game
// ------------------------------------------------
// Filename: 		clearScreen.cpp
// Created: 		05-01-15
// Description: 	clears terminal screen
// ------------------------------------------------

// The following code uses ncurses to clear the screen. BORROWED FROM Duoas at <http://www.cplusplus.com/articles/4z18T05o/>

// Headers-----------------------------------------

#include <ncurses.h>
#include <unistd.h>
#include <term.h>

void clearScreen()
{
	if (!cur_term)
	{
		int result;
		setupterm(NULL, STDOUT_FILENO, &result);
		if (result <= 0) return;
	}

	putp( tigetstr( "clear" ) );
}
