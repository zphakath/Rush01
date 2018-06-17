
#include "Ncurses.hpp"
#include <ncurses.h>

Ncurses::Ncurses(void) {
     initscr();
	//start_color();
	//init_pair(1, COLOR_RED, COLOR_BLACK);
	//attron(COLOR_PAIR(1));COLOR_PAIR(1));
	//printw("Something");
	//attroff(COLOR_PAIR(1));
    getmaxyx(stdscr,_maxY, _maxX);
    WINDOW * win = newwin(_maxY, _maxX, 0, 0);
    refresh();
    box(win, '*', '+');
    mvwprintw(win, 2, 2, "********System Info********");
    mvwprintw(win, 3, 5, "Welcome :" );
    mvwprintw(win, 5, 5, "Date :" );
    mvwprintw(win, 7, 5, "Host Name:" );
    mvwprintw(win, 9, 5, "Product Name:" );
    mvwprintw(win, 11, 5, "Product Version:" );
    mvwprintw(win, 13, 5, "BUild Version:" );
    mvwprintw(win, 14, 1, " " );
    mvwprintw(win, 2, 60, "********CPU  & RAM Info*******");
    mvwprintw(win, 3, 62, "CPU info :" );
    mvwprintw(win, 5, 62, "CPU Cores:" );
    mvwprintw(win, 7, 62, "CPU Speed:" );
    mvwprintw(win, 9, 62, "Ram Used:" );
    mvwprintw(win, 11, 62, "Ram Unused:" );
    mvwprintw(win, 13, 62, "Ram Total :" );
     mvwprintw(win, 2, 120, "***********Network*********");
    mvwprintw(win, 3, 122, "Packets in :" );
    mvwprintw(win, 5, 122, "Packets out:" );
    wrefresh(win); 
    //mvwprintw(win, _maxY, _maxX, 0, 0);
	//wrefresh(win);
    refresh();
	//getakech();
	endwin();
}

Ncurses::Ncurses(Ncurses const & rhs) { *this = rhs; }

Ncurses & Ncurses::operator=(Ncurses const &) { return (*this); }

Ncurses::~Ncurses(void) {
    //clear();
    //refresh();
    endwin();
}
