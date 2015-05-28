// ------------------------------------------------
// Project Title:       Project Ysgramor
// Author:              Joey Gliebe
// Started:             04-06-15
// Version:             0.1
// Description:         A text-based adventure game
// ------------------------------------------------
// Filename: 		battle.cpp
// Created: 		04-27-15
// Description: 	A combat sequence that ends
// 			in either success or
// 			failure
// ------------------------------------------------

// Headers-----------------------------------------

#include <iostream>
#include <string>
#include <cstdlib>
#include "clearScreen.h"
#include "game.h"
#include "menu.h"

// Global Variables--------------------------------
extern int g_partyCurrentHealth;
extern int g_partyMaxHealth;
extern int g_partyMoney;
extern int g_partyArmorStatus;
extern int g_partyPotionCount;

std::string battle(std::string areaPlace)
{
	if (areaPlace == "forest")
	{
		std::cout << "Before you go much farther, a wolf comes out of nowhere!  \n";
		std::cin.ignore();
		
		if (g_partyPotionCount >= 1)
		{
			std::cout << "With tactical potion use, you defeat the beast.  After the battle, you find money lying in the wolf's corpse.  You gain 100 gold!";
			g_partyMoney += 100;
			area1();
		}
		
		else if (g_partyPotionCount <= 0)
		{
			std::cout << "The battle was going well, but and unfortunate blow and the lack of potions or equipment spelled your doom.  GAME OVER";
			std::exit(0);
		}
	}

	else if (areaPlace == "fort")
	{
		std::cout << "With a smirk, you and your party lunge forth, ready to remove the terror from your kingdom.";
		std::cin.ignore();
		
		if (g_partyArmorStatus == 2)
		{
			std::cout << "After the beast is slain, the fort begins to crumble at your feet.  All is peaceful in the world!";
			std::cout << "\n\nCongradulations!  A winner is you.";
			std::cin.ignore();
			std::exit(0);
		}
		
		else if (g_partyArmorStatus <= 1)
		{
			std::cout << "While you fight valiently, the monster overpowers your party, ripping through the travel armor with little resistance.  GAME OVER";
			std::exit(0);
		}
	}

	else
	{
		std::cout << "ERROR ERROR: Area is not set or is not recognized...";
		std::exit(0);
	}
}
