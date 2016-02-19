#include "screen.h"

int main()
{
	Screen mainscr;
	mainscr.init();
	mainscr.generate(5);
	refresh();
	getch();
	endwin();
	return 0;
}
