#include <gb/gb.h>
#include <stdio.h>

#include "src/critter.c"

struct Critter player;

void init() {
	DISPLAY_ON;

	createCritter(&player);
	updateCritter(&player);
}

void checkInput() {
}

void updateSwitches() {
	
	HIDE_WIN;
	SHOW_SPRITES;
	SHOW_BKG;
	
}

void performantdelay(UINT8 numloops) {
	UINT8 i;
	for (i = 0; i < numloops; i++)
	{
		wait_vbl_done();
	}
	
}

void main() {
	init();
	while(1) {
		checkInput();
		updateSwitches();
		performantdelay(5);
	}
}