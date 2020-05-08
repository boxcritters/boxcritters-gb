#ifndef _CRITTER_DATA_H_
#define _CRITTER_DATA_H_
#include <gb/gb.h>

#include "../sprites/hamster_front.c"
#include "../sprites/hamster_back.c"

#define FRAME_SIZE 8

struct CritterData {
	unsigned char* colors;
	UBYTE count,width,height;
	UBYTE tiles[FRAME_SIZE*1];
	UBYTE flip[FRAME_SIZE*1];
};

struct CritterData Hamster = {
	TileHamFront,
	13,2,4,
	{
		0,0,
		1,1,
		2,2,
		3,3
	},
	{
		0,1,
		0,1,
		0,1,
		0,1
	}
};