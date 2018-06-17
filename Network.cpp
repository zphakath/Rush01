
#include "Network.hpp"

Network::Network(void) {
	_getNetwork();
}

Network::Network(Network const & rhs) { *this = rhs; }

Network::~Network(void) { }

Network & Network::operator=(Network const & rhs) {
	this->_in = rhs.getIn();
	this->_out = rhs.getOut();
	return (*this);
}

void		Network::_allocateRam(std::string info) {
	std::string		temp;
	size_t			index;

	while ((index = info.find(',')) != std::string::npos) {
		temp = strTrim(info.substr(0, index));
		_in = std::stoi(strTrim(temp));
		info = strTrim(info.substr(index + 1));
		std::cout << temp << std::endl;
	}
	if (info.size() > 0) {
		_out = std::stoi(strTrim(info));
		std::cout << info << std::endl;
	}
}

void		Network::_getNetwork(void) {
	std::string		searchString;
	std::size_t		index;
	std::ifstream	pFile("sysinfo.info");
	std::string		tempString;
	std::string		line;

	system("top -l 1 -n 0 | grep 'Networks' > sysinfo.info");
	searchString = "Networks: packets:";
	while (getline(pFile, line)) {
		if ((index = line.find(searchString)) != std::string::npos) {
			tempString = line.substr(searchString.size());
		}
	}
	_allocateRam(tempString);
	pFile.close();
}

void				Network::refreshData(void) {
	_getNetwork();
}

unsigned long		Network::getIn(void) const { return (this->_in); }
unsigned long		Network::getOut(void) const { return (this->_out); }
