#ifndef GENERAL_HPP
#define GENERAL_HPP

#include <unistd.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include "IMonitorModule.hpp"

class	General : public Imonitormodule {
	private:
		std::string		_username;
		std::string		_hostname;
		std::string		_osInfoModule;
		std::string		_dateTime;
		std::string		_getTime();
		std::string		_productName;
		std::string		_productVersion;
		std::string		_buildVersion;
		std::string		_getMonth(int num);
		void			_getSysInfo(void);
		void			_initData(void);

	public:
		General(void);
		General(General const & rhs);
		~General(void);
		General & operator=(General const & rhs);
		std::string		getHostName(void) const;
		std::string		getOsInfoModule(void) const;
		std::string		getDateTime(void) const;
		std::string		getUsername(void) const;
		std::string		getProductName(void) const;
		std::string		getProductVersion(void) const;
		std::string		getBuildVersion(void) const;
		std::string		getCpuInfo(void) const;
		std::string		getCpuSpeed(void) const;
		void			initHostName(void);
		void			refreshData(void);
};

#endif
