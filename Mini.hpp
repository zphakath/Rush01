
#ifndef MINI_HPP
#define MINI_HPP

#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/System.hpp>
#include "General.hpp"
#include "CPUmodule.hpp"
#include "RAMmodule.hpp"
#include "Network.hpp"

class	Mini : public IMonitorDisplay {
	public:
		Mini(void);
		Mini(Mini const & rhs);
		Mini(General & gi, CpuModule & cp, Rammodule & rm, 
					Network & nt);
		~Mini(void);
		Mini & operator=(Mini const &rhs);
		General		_gr;
		CpuModule	_cpu;
		Rammodule	_ram;
		Network		_net;
		void		initDisplay();
};

#endif
