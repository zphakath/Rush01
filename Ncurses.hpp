
#ifndef	NCURSES_HPP
#define NCURSES_HPP

#include <ncurses.h>
#include "IMonitorDisplay.hpp"

class	Ncurses : public IMonitorDisplay {
	public:
		Ncurses(void);
		Ncurses(Ncurses const & rhs);
		~Ncurses(void);
		Ncurses & operator=(Ncurses const & rhs);
	private:
		int _maxX;
		int _maxY;
};

#endif
