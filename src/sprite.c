#include <gb/gb.h>

#define TILE_SIZE 8
UBYTE nextTile = 0;

UBYTE createSprite(unsigned char* data, UBYTE count) {
	UBYTE sprite = nextTile;
	set_sprite_data(sprite,count,data);
	nextTile+=count;
	return sprite;
}

void displaySprite(UBYTE sprite, UBYTE* tiles, UBYTE* flip, UBYTE count) {
	UBYTE i;
	for(i=0;i<count;i++) {

		set_sprite_tile(sprite+i,sprite+tiles[i]);
		if(flip[i]==1) set_sprite_prop(sprite+i, S_FLIPX);
	}
}

void moveSprite(UBYTE sprite, UBYTE x, UBYTE y, UBYTE width, UBYTE height) {
	UBYTE i;
	UBYTE count = width*height;
	for (i = 0;i < count; i++) {
		UBYTE ix = x + i%width * TILE_SIZE;
		UBYTE iy = y + i/width * TILE_SIZE;
		move_sprite(sprite+i,ix,iy);
	}
}