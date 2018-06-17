
#ifndef	NCURSES_HPP
#define NCURSES_HPP

#include <ncurses.h>

class	Ncurses {
	public:
		Ncurses(void);
		Ncurses(Ncurses const & rhs);
		~Ncurses(void);
		Ncurses & operator=(Ncurses const & rhs);
};

#endif
