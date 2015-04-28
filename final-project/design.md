Final Project Design Document
=============================

About
-----------------------------
This document exists as a place to put ideas, sketches and the like for the final project --- Project Ysgramor.  Ideas found in here are not necessarily complete unless they are placed under the Complete section.

Drawing Board
-----------------------------
	*Player Characters
	*Enemies
	*Encounters
	*Story
	*Input
	*Graphics
	*Saving

Complete Ideas
-----------------------------

Accepted Ideas
-----------------------------
	*Player Characters
		*Leveling system, or equipment based?
			*Equipment
				*Equipment would be given thoughout the game
				*Levels would encourage players to train too much
				*Hidden equipment can be found through exploration
		*Create characters, or pre-defined characters?
			*Pre-defined Characters
	*Enemies
		*
	*Encounters
		*What kind of encounters should there be?
			*Etrian Odyssey style (modified)
				*EXPLAINATION + DETAILS HERE
		*Store players and enemies in *.txt files VS in *.lua files
			*LUA FORMAT
				*battle.cpp would call the functions located in the lua files for their respecive entitiy
				*The respective *.lua files for the player characters would load and save information to and from a *.txt file (or some other format)
				*battle.cpp would call lua functions, perform the battle, and save the changes for the player characters at the end of battle
					*Depending on future decisions, I may have no save system, so I might end up with holding the values in memory if I decide against saves
	*Story
		*
	*Input
		*What input system should there be?
			*Written Commands (Writing "move up" for moving up, etc.)
	*Graphics
		*Descriptions
			*Going to use textual descriptions since it allows for faster content creation
	*Saving
		*Should there be a save system
			*No Saving
				*Saving is not necessary
				*Takes time to make a save system

Rejected Ideas
-----------------------------
	*Player Characters
		*Leveling system, or equipment based
			*Leveling
				*Traditional
				*
	*Encounters
		*What kind of encounters should there be? (Will definately be turn based)
			*Final Fantasy style (left and right sides)
				*Older (no concept of rows), or newer (front/back row)?
			*Mother/Earthbound style (top and bottom)
		*Store players and enemies in *.txt files VS in *.lua files
			*FOR TXT FORMAT
				*battle.cpp accesses information from *.txt files, passing the information through generic functions that does the actions
				*Each enitiy has a *.txt file with their stats, moves and other information
				*battle.cpp would read the text files, perform the battle, then save the changes at the end of battle (player characters only)
	*Graphics
		*Should there be graphics (ASCII ART) or just textual representations?
			*FOR Graphics
				*Looks more professional
	*Input
		*What input system?
			*Predefined keys (WSAD for menu movement, etc.)
