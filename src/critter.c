#include <gb/gb.h>

#include "sprite.c"

#include "../sprites/hamster_front.c"

struct Critter {
	struct Sprite sprite;
	UINT8 x,y;
	UINT8 frame;
};

void createCritter(struct Critter* critter) {
	createSprite(&(critter->sprite));
	critter->x = 80-8;
	critter->y = 72-16;
	critter->frame = 0;
}

void updateCritter(struct Critter* critter) {
	unsigned char* tiles = TileHamFront;
	UINT8 frames[8] = {
		1,1,
		3,3,
		5,5,
		7,7
	},
	flip[8] = {
		1,0,
		1,0,
		1,0,
		1,0
	};

	loadTiles(&(critter->sprite),tiles);
	loadFrame(&(critter->sprite),frames,critter->frame,flip);
	moveSprite(&(critter->sprite),critter->x,critter->y);
}