
#ifndef	IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <unistd.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <algorithm>

class Imonitormodule {
	protected:
		std::string		strTrim(std::string str);
		std::string		_title;

	public:
		Imonitormodule(void);
		Imonitormodule(Imonitormodule const & rhs);
		~Imonitormodule(void);
		Imonitormodule & operator=(Imonitormodule const & rhs);
		std::string		getTitle(void) const;
		virtual void	refreshData(void) = 0;
};

#endif
