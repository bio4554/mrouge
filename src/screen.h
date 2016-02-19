#ifndef SCREENDEF
#define SCREENDEF
#include <ncurses.h>
#include "config.h"


class Tile {
public:
	char icon;
	bool canWalk;
};

class Screen {
public:
	Tile map[MAX_Y][MAX_X];
	void render();
	void dig(int,int,int,int,char);
	void generate(int);
	void init();
};

#endif
