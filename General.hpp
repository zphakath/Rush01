#ifndef GENERAL_HPP
#define GENERAL_HPP

#include <unistd.h>
#include <iostream>

class	General {
	private:
		std::string		_username;
		std::string		_hostname;
		std::string		_osInfoModule;
		std::string		_dateTime;

	public:
		General(void);
		General(General const & rhs);
		~General(void);
		General & operator=(General const & rhs);
		std::string		getHostName(void) const;
		std::string		getOsInfoModule(void) const;
		std::string		getDateTime(void) const;
		std::string		getUsername(void) const;
		void			initHostName(void);
};

#endif
