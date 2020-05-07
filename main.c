#include <gb/gb.h>
#include <stdio.h>

#include "sprites/hamster_front.c"
#include "sprites/hamster_back.c"

#include "src/sprite.c"


void main() {
	UBYTE tiles[8] = {
		0,1,
		2,3,
		4,5,
		6,8
	};
	UBYTE flip[8] = {
		0,1,
		0,1,
		0,0,
		0,0
	};
	UBYTE sprite = createSprite(TileHamFront, 39);
	displaySprite(sprite, tiles, flip, 2*4);
	moveSprite(sprite, 80, 72, 2, 4);

	SHOW_SPRITES;
}