Final Project Design Document
=============================

About
-----------------------------
This document exists as a place to put ideas, sketches and the like for the final project --- Project Ysgramor.  Ideas found in here are not necessarily complete unless they are placed under the Complete section.

Drawing Board
-----------------------------
*Player Characters
	*Create characters, or pre-defined characters?
		*FOR Character Creation
		*FOR Pre-defined Characters
	*Leveling system, or equipment based?
		*FOR Levels
		*FOR Equipment
		*FOR Mixture
*Enemies
*Encounters
*Story
	*Needs a story; yes or no?
		*FOR YES
		*FOR NO
*Input
*Saving
	*SHOULD there be saving?
		*FOR Saving
		*FOR Not Saving
	*What format should the save file be?
		*FOR *.txt
		*FOR *.save
		*FOR *.lua

Complete Ideas
-----------------------------
*Store players and enemies in *.txt files VS in *.lua files
	*FOR TXT FORMAT
		*battle.cpp accesses information from *.txt files, passing the information through generic functions that does the actions
		*Each enitiy has a *.txt file with their stats, moves and other information
		*battle.cpp would read the text files, perform the battle, then save the changes at the end of battle (player characters only)
	*FOR LUA FORMAT
		*battle.cpp would call the functions located in the lua files for their respecive entitiy
		*The respective *.lua files for the player characters would load and save information to and from a *.txt file (or some other format)
		*battle.cpp would call lua functions, perform the battle, and save the changes for the player characters at the end of battle
			*Depending on future decisions, I may have no save system, so I might end up with holding the values in memory if I decide against saves

Accepted Ideas
-----------------------------
*Encounters
	*What kind of encounters should there be?
		*Etrian Odyssey style (modified)
			*EXPLAINATION + DETAILS HERE

Rejected Ideas
-----------------------------
*Encounters
	*What kind of encounters should there be? (Will definately be turn based)
			*Final Fantasy style (left and right sides)
				*Older (no concept of rows), or newer (front/back row)?
			*Mother/Earthbound style (top and bottom)
