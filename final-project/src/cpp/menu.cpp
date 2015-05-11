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

#include <iostream>
#include <string>

void mainMenuDisplay() // Outputs the menu
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
	cout << " |--------------------------------------------------------------------------------------------------|" << endl;
	cout << " |                                                                                                  |" << endl;
	cout << " | a. Play                                                                                          |" << endl;
	cout << " | b. Exit                                                                                          |" << endl;
	cout << " |__________________________________________________________________________________________________|" << endl;

	cout << "\nSelect an option }> ";
}

char menuSelection(char answer)
{
	using namespace std;

	std::string userAnswer;
	cin >> userAnswer;

	answer = userAnswer[0];

	return answer;
}
