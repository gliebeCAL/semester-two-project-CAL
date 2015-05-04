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

void menuDisplay() // Outputs the menu
{
	using namespace std;
	cout << "  __________________________________________________________________________________________________ " << endl;
	cout << " |                                                                                                  |" << endl;
	cout << " |                                             PROJECT:                                             |" << endl;
	cout << " |                                                                                                  |" << endl;
	cout << " | \\       /  _________  __________  ______      _____    ____          ____     ______    ______   |" << endl;
	cout << " |  \\     /   |       |  |           |     \\    /     \\   |   \\        /   |    /      \\   |     \\  |" << endl;
	cout << " |   \\   /    |          |           |      |  /       \\  |    \\      /    |   /        \\  |      | |" << endl;
	cout << " |    \\ /     |          |           |      | |         | |     \\    /     |  |          | |      | |" << endl;
	cout << " |     |      |_______   |  _______  |_____/  |_________| |      \\__/      |  |          | |_____/  |" << endl;
	cout << " |     |              |  |         | |   \\    |         | |                |  |          | |   \\    |" << endl;
	cout << " |     |              |  |         | |    \\   |         | |                |   \\        /  |    \\   |" << endl;
	cout << " |     |      |_______|  |_________| |     \\  |         | |                |    \\______/   |     \\  |" << endl;
	cout << " |                                                                                                  |" << endl;
	cout << " |-_-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-__-_-|" << endl;
	cout << " |                                                                                                  |" << endl;
	cout << " | 1. Play                                                                                          |" << endl;
	cout << " | 2. Exit                                                                                          |" << endl;
	cout << " |__________________________________________________________________________________________________|" << endl;

	cout << "\n}> ";
}

int menuSelection(int menu_answer)
{
	using namespace std;

	cin >> menu_answer;

	return menu_answer;
}
