/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUmodule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:41:13 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/17 16:43:26 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPUmodule.hpp"

CpuModule::CpuModule(void) {
	_initData();
}

CpuModule::CpuModule(CpuModule const & rhs) { *this = rhs; }

CpuModule::~CpuModule(void) {
}

CpuModule &	CpuModule::operator=(CpuModule const & rhs) {
	this->_cpuSpeed = rhs.getCpuSpeed();
	this->_cores = rhs.getCores();
	this->_cpuInfo = rhs.getCpuInfo();
	return (*this);
}

void				CpuModule::_getCpuInfo(void) {
	std::string			line;
	std::ifstream pFile("sysinfo.info");

	system("sysctl -n machdep.cpu.brand_string > sysinfo.info");
	while (getline(pFile, line)) {
		_cpuInfo = line;
	}
	pFile.close();
}

void				CpuModule::_getCpuSpeed(void) {
	std::string			line;
	std::ifstream		pFile("sysinfo.info");
	std::string			searchName;
	std::size_t			index;
	std::stringstream	temp;

	searchName = ":";
	system("/usr/sbin/system_profiler SPHardwareDataType | grep 'Processor Speed' > sysinfo.info");
	while (getline(pFile, line)) {
		if ((index = line.find(searchName)) != std::string::npos) {
			temp.str(std::string());
			temp << line.substr(index + 1);
			_cpuSpeed = strTrim(temp.str());
		}
	}
	pFile.close();
}


void				CpuModule::_getCores(void) {
	std::string			line;
	std::size_t			index;
	std::ifstream		pFile("sysinfo.info");
	std::stringstream	temp;
	std::string			searchString;

	searchString = ":";
	system("/usr/sbin/system_profiler SPHardwareDataType | grep 'Cores'  > sysinfo.info");
	while (getline(pFile, line)) {
		if ((index = line.find(searchString)) != std::string::npos) {
			temp.str(std::string());
			temp << line.substr(index + 1);
			_cores = temp.str();
		}
	}
	pFile.close();
}

void				CpuModule::_allocateNumber(std::string info) {
	std::string	temp;
	size_t		index;
	size_t		len;

	while ((index = info.find(",")) != std::string::npos) {
		temp = strTrim(info.substr(0, index));
		if ((len = temp.find("user")) != std::string::npos)
			_user = stof(temp);
		else if ((len = temp.find("sys")) != std::string::npos)
			_sys = stof(temp);
		info = strTrim(info.substr(index + 1));
	}
	if (info.size() > 0)
		_idle = stof(strTrim(info));
}

void				CpuModule::_readCpu(void) {
	std::string		line;
	std::size_t		index;
	std::ifstream	pFile("sysinfo.info");
	std::string		searchString;
	std::string		tempString;

	system("top -l 1 -n 0 | grep 'CPU' > sysinfo.info");
	searchString = "CPU usage:";
	while (getline(pFile, line)) {
		if ((index = line.find(searchString)) != std::string::npos) {
			tempString = strTrim(line.substr(searchString.size()));
		}
	}
	_allocateNumber(tempString);
	pFile.close();
}


void				CpuModule::_initData(void) {
	_getCpuInfo();
	_getCpuSpeed();
	_getCores();
	_readCpu();
}

void				CpuModule::refreshData(void) {
	_readCpu();
}

std::string			CpuModule::getCpuSpeed(void) const { return (this->_cpuSpeed); }
std::string			CpuModule::getCores(void) const { return (this->_cores); }
std::string			CpuModule::getCpuInfo(void) const { return (this->_cpuInfo); }
