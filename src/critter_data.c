#ifndef _CRITTER_DATA_H_
#define _CRITTER_DATA_H_
#include <gb/gb.h>

#include "../sprites/hamster_front.c"
#include "../sprites/hamster_back.c"

#define FRAME_SIZE 8

struct CritterData {
	unsigned char* colors;
	UBYTE count,width,height;
	UINT8 tiles[FRAME_SIZE*5];
	UINT8 flip[FRAME_SIZE*5];
};

struct CritterData Hamster = {
	TileHamFront,
	13,2,4,
	{
		0,0,
		1,1,
		2,2,
		3,3,

		4,4,
		5,5,
		6,6,
		7,7,

		8,8,
		9,9,
		10,10,
		11,11,

		8,8,
		9,9,
		10,10,
		12,12,

		4,4,
		5,5,
		6,6,
		7,7
	},
	{
		0,1,
		0,1,
		0,1,
		0,1,

		0,1,
		0,1,
		0,1,
		0,1,

		0,1,
		0,1,
		0,1,
		0,1,

		0,1,
		0,1,
		0,1,
		0,1,

		0,1,
		0,1,
		0,1,
		0,1
	}
};