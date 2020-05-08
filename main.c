#include <gb/gb.h>
#include <stdio.h>

#include "src/critter_data.c"
#include "src/sprite.c"

UBYTE frame = 0;

void performantdelay(UINT8 numloops)
{
	UINT8 i;
	for (i = 0; i < numloops; i++)
	{
		wait_vbl_done();
	}
}

void main()
{
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
	displaySprite(sprite, Hamster.tiles, Hamster.flip, Hamster.width * Hamster.height, frame);
	moveSprite(sprite, Hamster.width, Hamster.height, 80, 72);
	SHOW_SPRITES;

	while (1)
	{
		frame++;
		frame %= 5;
		displaySprite(sprite, Hamster.tiles, Hamster.flip, Hamster.width * Hamster.height, frame);
		performantdelay(5);
	}
}