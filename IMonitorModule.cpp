
#include "IMonitorModule.hpp"

std::string		Imonitormodule::strTrim(std::string str) {
	remove(str.begin(), str.end(), ' ');
	remove(str.begin(), str.end(), '\t');
	return (str);
}

Imonitormodule::Imonitormodule(void) { }

Imonitormodule::Imonitormodule(Imonitormodule const & rhs) { *this = rhs; }

Imonitormodule::~Imonitormodule(void) { }

Imonitormodule	&	Imonitormodule::operator=(Imonitormodule const & rhs) {
	this->_title = rhs.getTitle();
	return (*this);
}

std::string			Imonitormodule::getTitle(void) const { return (this->_title); }
