
#include "Ncurses.hpp"
#include <ncurses.h>

Ncurses::Ncurses(void) {
     initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("Something");
	attroff(COLOR_PAIR(1));
	refresh();
	getch();
	
}

Ncurses::Ncurses(Ncurses const & rhs) { *this = rhs; }

Ncurses & Ncurses::operator=(Ncurses const &) { return (*this); }

Ncurses::~Ncurses(void) {
    endwin();
}
