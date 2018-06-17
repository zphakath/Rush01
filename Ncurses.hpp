
#ifndef	NCURSES_HPP
#define NCURSES_HPP

#include <ncurses.h>
#include "IMonitorDisplay.hpp"
#include "IMonitorModule.hpp"
#include "General.hpp"
#include "CPUmodule.hpp"
#include "RAMmodule.hpp"
#include "Network.hpp"
#include "Ncurses.hpp"

class	Ncurses : public IMonitorDisplay {
	public:
		Ncurses(void);
		Ncurses(General & gi, CpuModule & cp, Rammodule & rm, 
					Network & nt);
		Ncurses(Ncurses const & rhs);
		~Ncurses(void);
		Ncurses & operator=(Ncurses const & rhs);

	private:
		int _maxX;
		int _maxY;
		General		_gr;
		CpuModule	_cpu;
		Rammodule	_ram;
		Network		_net;
		void		_displayInfo();
};

#endif
