Final Project Design Document
=============================

About
-----------------------------
This document exists as a place to put ideas, sketches and the like for the final project.  Ideas found in here are not necessarily complete unless they are placed under the Complete section.

Drawing Board
-----------------------------
*Player Characters
	*Create characters, or pre-defined characters?
	*Leveling system, or equipment based?
*Enemies
*Encounters
	*What kind of encounters should there be? (Will definately be turn based)
		*Final Fantasy style (left and right sides)
			*Older (no concept of rows), or newer (front/back row)?
		*Mother/Earthbound style (top and bottom)
		*Etrian Odyssey style (top and bottom + front/back rows)
*Story
	*Needs a story; yes or no?
		*FOR YES
		*FOR NO
*Input
*Saving
	*What format should the save file be?
		*FOR *.txt
		*FOR *.save
		*FOR *.lua

Complete Ideas
-----------------------------
*Store players and enemies in *.txt files VS in *.lua files
	*FOR TXT FORMAT
		*battle.lua accesses information from *.txt files, passing the information through generic functions that does the actions
		*Each enitiy has a *.txt file with their stats, moves and other information
		*battle.lua would read the text files, perform the battle, then save the changes at the end of battle (player characters only)
	*FOR LUA FORMAT
		*battle.lua would call the functions located in the lua files for their respecive entitiy
		*The respective *.lua files for the player characters would load and save information to and from a *.txt file (or some other format)
		*battle.lua would call lua functions, perform the battle, and save the changes for the player characters at the end of battle

Accepted Ideas
-----------------------------

Failed Ideas
-----------------------------
