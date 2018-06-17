
#ifndef MINI_HPP
#define MINI_HPP

#include "IMonitorDisplay.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/System.hpp>

class	Mini : public IMonitorDisplay {
	public:
		Mini(void);
		Mini(Mini const & rhs);
		~Mini(void);
		Mini & operator=(Mini const &rhs);
};

#endif
