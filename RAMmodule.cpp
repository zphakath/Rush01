
#include "RAMmodule.hpp"

Rammodule::Rammodule(void) {
	_getRam();
}

Rammodule::Rammodule(Rammodule const & rhs) { *this = rhs; }

Rammodule::~Rammodule(void) { }

Rammodule & Rammodule::operator=(Rammodule const & rhs) {
	this->_used = rhs.getUsed();
	this->_unused = rhs.getUsed();
	this->_total = rhs.getTotal();
	return (*this);
}

void		Rammodule::_allocateRam(std::string info) {
	std::string		temp;
	size_t			index;
	size_t			len;

	while ((index = info.find(',')) != std::string::npos) {
		temp = strTrim(info.substr(0, index));
		if ((len = temp.find("used")) != std::string::npos)
			_used = stoi(strTrim(temp));
		info = strTrim(info.substr(index + 1));
	}
	if (info.size() > 0)
		_unused = stoi(strTrim(info));
	_total = _used + _unused;
}

void		Rammodule::_getRam(void) {
	std::string		searchString;
	std::size_t		index;
	std::ifstream	pFile("sysinfo.info");
	std::string		tempString;
	std::string		line;

	system("top -l 1 -n 0 | grep 'PhysMem' > sysinfo.info");
	searchString = "PhysMem:";
	while (getline(pFile, line)) {
		if ((index = line.find(searchString)) != std::string::npos) {
			tempString = line.substr(searchString.size());
		}
	}
	_allocateRam(tempString);
}

float		Rammodule::getUsed(void) const { return (this->_used); }
float		Rammodule::getUnused(void) const { return (this->_unused); }
float		Rammodule::getTotal(void) const { return (this->_total); }
