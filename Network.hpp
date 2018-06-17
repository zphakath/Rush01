/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMmodule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:43:59 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/17 13:28:45 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORK_HPP
#define NETWORK_HPP

#include <unistd.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include "IMonitorModule.hpp"

class Network : public Imonitormodule {
	private:
		unsigned long		_in;
		unsigned long		_out;
		void				_getNetwork(void);
		void				_allocateRam(std::string info);

	public:
		Network(void);
		Network(Network const & rhs);
		~Network(void);
		Network & operator=(Network const & rhs);
		unsigned long		getIn(void) const;
		unsigned long		getOut(void) const;
		void				refreshData(void);
};

#endif
