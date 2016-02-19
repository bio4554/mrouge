#include "screen.h"

void Screen::render() {
	for(int y = 0; y < MAX_Y; y++)
		for(int x = 0; x < MAX_X; x++)
			mvaddch(y, x, map[y][x].icon);
}

void Screen::dig(int x1, int y1, int x2, int y2, char fill) {
	if(x2 < x1) {
		int tmp = x2;
		x2 = x1;
		x1 = tmp;
	}
	
	if(y2 < y1) {
		int tmp = y2;
		y2 = y1;
		y1 = tmp;
	}
	for(int y = y1; y < y2; y++)
		for(int x = x1; x < x2; x++)
			mvaddch(y, x, fill);
}

void Screen::generate(int numof) {
	dig(0, 0, MAX_X, MAX_Y, WALL);
	dig(MAX_X/2, MAX_Y/2, MAX_X, MAX_Y, FLOOR);
}

void Screen::init() {
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
}
