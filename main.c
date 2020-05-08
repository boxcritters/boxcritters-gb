#include <gb/gb.h>
#include <stdio.h>


#include "src/critter_data.c"
#include "src/sprite.c"

UBYTE frame = 0;


void main() {
	/*UBYTE tiles[8] = {
		0,0,
		1,1,
		2,2,
		3,3
	};
	UBYTE flip[8] = {
		0,1,
		0,1,
		0,1,
		0,1
	};*/
	UBYTE sprite = createSprite(Hamster.colors, 13);
	displaySprite(sprite, Hamster.tiles, Hamster.flip, 2*4);
	moveSprite(sprite, 80, 72, Hamster.width, Hamster.height);
	SHOW_SPRITES;
}