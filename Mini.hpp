
#ifndef MINI_HPP
#define MINI_HPP

#include "IMonitorDisplay.hpp"
#include "mlx.h"
#include <iostream>

class	Mini : public IMonitorDisplay {
	public:
		Mini(void);
		Mini(Mini const & rhs);
		~Mini(void);
		Mini & operator=(Mini const &rhs);
};

#endif
