#ifndef _CRITTER_DATA_H_
#define _CRITTER_DATA_H_
#include <gb/gb.h>

#include "../sprites/hamster_front.c"
#include "../sprites/hamster_back.c"

typedef struct CritterData {
	unsigned char* colors;
	UBYTE count,width,height;
	UBYTE tiles[];
	UBYTE flip[];
} CritterData;

CritterData Hamster = {
	TileHamFront,
	39,2,4,
	{
		0,1,
		2,3,
		4,5,
		6,8
	},
	{
		0,1,
		0,1,
		0,0,
		0,0
	}
};