//////////////////////////////////////////////////////
// Project Title:	Project Ysgramor            //
// Author:		Joey Gliebe                 //
// Started:		04-06-15                    //
// Version:		0.0                         //
// Description:		A text-based adventure game //
// ------------------------------------------------ //
// Filename: 		clearScreen.cpp             //
// Created: 		05-01-15                    //
// Description: 	clears terminal screen      //
//////////////////////////////////////////////////////

#include <ncurses.h>
#include <unistd.h>
#include <term.h>

void clearScreen() // This is a standard function for clearing the screen using ncurses
{
	if (!cur_term)
	{
		int result;
		setupterm( NULL, STDOUT_FILENO, &result );
		if (result <= 0) return;
	}

	putp( tigetstr( "clear" ) );
}
