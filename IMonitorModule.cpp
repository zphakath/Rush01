
#include "IMonitorModule.hpp"

std::string		Imonitormodule::strTrim(std::string str) {
	remove(str.begin(), str.end(), ' ');
	remove(str.begin(), str.end(), '\t');
	return (str);
}
