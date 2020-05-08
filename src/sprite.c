#ifndef _SPRITE_H_
#define _SPRITE_H_
#include <gb/gb.h>
#include <stdio.h>

#define TILE_SIZE 8
UBYTE nextTile = 0;

UBYTE createSprite(unsigned char* data, UBYTE count) {
	UBYTE sprite = nextTile;
	set_sprite_data(sprite,count,data);
	nextTile+=count;
	return sprite;
}

void displaySprite(UBYTE sprite, UINT8* tiles, UINT8* flip, UINT8 count, UINT8 frame) {
	UBYTE i;
	UINT8 frameStart = frame*count;
	for(i=0;i<count;i++) {
		UINT8 frameID = frameStart+i;
		//printf("%d:%d\n",(int)frameID, (int)tiles[frameID]);
		set_sprite_tile(sprite+i,sprite+tiles[frameID]);
		if(flip[frameID]==1) set_sprite_prop(sprite+i, S_FLIPX);
	}
}

void moveSprite(UBYTE sprite, UBYTE width, UBYTE height, UBYTE x, UBYTE y) {
	UBYTE i;
	UBYTE count = width*height;
	for (i = 0;i < count; i++) {
		UBYTE ix = x + i%width * TILE_SIZE;
		UBYTE iy = y + i/width * TILE_SIZE;
		move_sprite(sprite+i,ix,iy);
	}
}
#endif