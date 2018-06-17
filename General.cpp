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

std::string			General::_getMonth(int num) {
	std::string temp;

	switch(num) {
		case 1:
			temp = "JAN";
			break ;
		case 2:
			temp = "FEB";
			break ;
		case 3:
			temp = "MAR";
			break ;
		case 4:
			temp = "APR";
			break ;
		case 5:
			temp = "MAY";
			break ;
		case 6:
			temp = "JUNE";
			break ;
		case 7:
			temp = "JULY";
			break ;
		case 8:
			temp = "AUG";
			break ;
		case 9:
			temp = "SEPT";
			break ;
		case 10:
			temp = "OCT";
			break ;
		case 11:
			temp = "NOV";
			break ;
		case 12:
			temp = "DEC";
			break ;
	}
	return (temp);
}

std::string			General::_getTime() {
	std::time_t 		t = std::time(0);
	std::stringstream	year;

	std::tm* now = std::localtime(&t);
	year << (now->tm_year + 1900);
	year << " " << _getMonth(now->tm_mon + 1);
	year << " " << now->tm_mday;
    return (year.str());
}

void				General::_getSysInfo(void) {
	std::string			line;
	std::size_t			index;
	std::stringstream	temp;
	std::ifstream pFile("sysinfo.info");

	
	system("sw_vers > sysinfo.info");
	while (getline(pFile, line)) {
		if ((index = line.find("ProductName:")) != std::string::npos) {
			temp.str(std::string());
			temp << line.substr(strlen("ProductName:"));
			_productName = strTrim(temp.str());
		}
		else if ((index = line.find("ProductVersion:")) != std::string::npos) {
			temp.str(std::string());
			temp << line.substr(strlen("ProductVersion:"));
			_productVersion = strTrim(temp.str());
		}
		else if ((index = line.find("BuildVersion:")) != std::string::npos) {
			temp.str(std::string());
			temp << line.substr(strlen("BuildVersion:"));
			_buildVersion = strTrim(temp.str());
		}
	}
	pFile.close();
}

void				General::initHostName(void) {
	char	temp[250];

	getlogin_r(temp, 250);
	_username = temp;
	gethostname(temp, 250);
	_hostname = temp;
	_dateTime = _getTime();
	_getSysInfo();
}

std::string			General::getHostName(void) const { return (this->_hostname); }
std::string			General::getOsInfoModule(void) const { return (this->_osInfoModule); }
std::string			General::getDateTime(void) const { return (this->_dateTime); }
std::string			General::getUsername(void) const { return (this->_username); }
std::string			General::getProductVersion(void) const  { return (this->_productVersion); }
std::string			General::getProductName(void) const { return (this->_productName); }
std::string			General::getBuildVersion(void) const { return (this->_buildVersion); }
//std::string			General::getCpuInfo(void) const { return (this->_cpuInfo); }
