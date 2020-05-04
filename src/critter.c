#include <gb\gb.h>

struct Critter {
	unsigned char sprite;
	UBYTE spriteid[2*4];
	UINT8 x;
	UINT8 y;
	UINT8 width;
	UINT8 height;
}

struct Critter createCritter(unsigned char sprite) {
	Critter critter;
	critter.sprite = sprite;
	critter.x = 0;
	critter.y = 0;
	critter.width = 8*2;
	critter.height = 8*4;

	set_sprite_title(0,0);
	critter.spriteid[0] = 0;
	set_sprite_title(1,1);
	critter.spriteid[1] = 1;
	set_sprite_title(2,2);
	critter.spriteid[2] = 2;
	set_sprite_title(3,3);
	critter.spriteid[3] = 3;
	
	set_sprite_title(4,4);
	critter.spriteid[4] = 4;
	set_sprite_title(5,5);
	critter.spriteid[5] = 5;
	set_sprite_title(6,6);
	critter.spriteid[6] = 6;
	set_sprite_title(7,7);
	critter.spriteid[7] = 7;

	return critter;
}