
#ifndef	CPUMODULE_HPP
#define CPUMODULE_HPP

#include <unistd.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include "IMonitorModule.hpp"

class	CpuModule : public Imonitormodule{
	private:
		std::string		_cpuSpeed;
		std::string		_cores;
		std::string		_cpuInfo;
		float			_user;
		float			_sys;
		float			_idle;
		void			_getCpuSpeed(void);
		void			_getCores(void);
		void			_getCpuInfo(void);
		void			_getAllInfo(void);
		void			_initData(void);
		void			_readCpu(void);
		void			_allocateNumber(std::string info);

	public:
		CpuModule(void);
		~CpuModule(void);
		CpuModule(CpuModule const & rhs);
		CpuModule & operator=(CpuModule const & rhs);
		std::string			getCpuSpeed(void) const;
		std::string			getCores(void) const;
		std::string			getCpuInfo(void) const;
		float				getUser(void) const;
		float				getSys(void) const;
		float				getIdle(void) const;
		void				refreshData(void);
};

#endif
