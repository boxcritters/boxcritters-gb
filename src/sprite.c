#include <gb/gb.h>

UBYTE TILE_SIZE = 8;
static UINT8 nextTileID = 0;

struct Sprite {
	UBYTE spriteid[8];
	UINT8 tileStart;
	UINT8 width;
	UINT8 height;
};

void createSprite(struct Sprite* sprite) {
	sprite->width = 8*2;
	sprite->height = 8*4;
}

//Load Frame with specific Tiles
void loadFrame(struct Sprite* sprite,UINT8* tileIDs, UINT8 frame, UINT8* flip) {
	UINT8 start = frame*8;
	UINT8 i;
	for (i=start;i<start+8;i++)
	{
		UBYTE tileID = sprite->tileStart+i-start;
		set_sprite_tile(tileID,tileIDs[i]);
		if(flip[i]==1) set_sprite_prop(tileID,S_FLIPX);
		sprite->spriteid[i-start] = tileID;
	}
}

//Load Tiles from Sprite File
void loadTiles(struct Sprite* sprite,unsigned char* tiles) {
	set_sprite_data(nextTileID,sprite->width*sprite->height,tiles);
	sprite->tileStart = nextTileID;
	nextTileID += 8;
}


void moveSprite(struct Sprite* sprite, UINT8 x, UINT8 y) {
	UINT8 i;
	for (i = 0; i <8; i++)
	{
		UINT8 ix = x + i%2 * TILE_SIZE;
		UINT8 iy = y + i/2 * TILE_SIZE;
		move_sprite(sprite->spriteid[i],ix,iy);
	}
	
}