#include "General.hpp"

General::General(void) {
	initHostName();
}

General::General(General const & rhs) : _hostname(rhs.getHostName()), _osInfoModule(rhs.getOsInfoModule()),
										_dateTime(rhs.getDateTime()) { }

General::~General(void) { }

General		& General::operator=(General const & rhs) {
	this->_hostname = rhs.getHostName();
	this->_osInfoModule = rhs.getOsInfoModule();
	this->_dateTime = rhs.getDateTime();
	return (*this);
}

void				General::initHostName(void) {
	char	temp[250];

	getlogin_r(temp, 250);
	_username = temp;
	gethostname(temp, 250);
	_hostname = temp;
}

std::string			General::getHostName(void) const { return (this->_hostname); }
std::string			General::getOsInfoModule(void) const { return (this->_osInfoModule); }
std::string			General::getDateTime(void) const { return (this->_dateTime); }
std::string			General::getUsername(void) const { return (this->_username); }
