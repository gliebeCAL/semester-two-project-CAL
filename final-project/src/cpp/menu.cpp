//////////////////////////////////////////////////////
// Project Title:	Project Ysgramor            //
// Author:		Joey Gliebe                 //
// Started:		04-06-15                    //
// Version:		0.0                         //
// Description:		A text-based adventure game //
// ------------------------------------------------ //
// Filename: 		menu.cpp                    //
// Created: 		04-27-15                    //
// Description: 	Display a menu and accept   //
// 			options                     //
//////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void menuDisplay() // Outputs the menu
{
	cout << "
		" \       /  _________  __________  ______      _____    ____           ____     ______    ______   "
		"  \     /   |       |  |           |     \    /     \   |   \         /   |    /      \   |     \  "
		"   \   /    |          |           |      |  /       \  |    \       /    |   /        \  |      | "
		"    \ /     |          |           |      | |         | |     \     /     |  |          | |      | "
		"     |      |_______   |  _______  |_____/  |_________| |      \___/      |  |          | |_____/  "
		"     |              |  |         | |   \    |         | |                 |  |          | |   \    "
		"     |              |  |         | |    \   |         | |                 |   \        /  |    \   "
		"     |      |_______|  |_________| |     \  |         | |                 |    \______/   |     \  "
		"                                                                                                   "
		"___________________________________________________________________________________________________"
		"                                                                                                   "
		" 1. Play                                                                                           "
		" 2. Exit                                                                                           "
		"                                                                                                   "
		"___________________________________________________________________________________________________"
}
bool menuSelect() // Ask and listen for "1", "2" or "3"
{

}
