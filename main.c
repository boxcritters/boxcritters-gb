#include <gb/gb.h>
#include <stdio.h>

#include "src/critter_data.c"
#include "src/sprite.c"


void main() {
	/*UBYTE tiles[8] = {
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
	};*/
	UBYTE sprite = createSprite(Hamster.colors, Hamster.count);
	displaySprite(sprite, Hamster.tiles, Hamster.flip, Hamster.width,Hamster.height);
	moveSprite(sprite, 80, 72, Hamster.width, Hamster.height);

	SHOW_SPRITES;
}