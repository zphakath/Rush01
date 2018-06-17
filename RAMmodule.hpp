/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMmodule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:43:59 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/17 10:47:10 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMODULE_HPP
#define RAMMODULE_HPP

#include <unistd.h>
#include <iostream>
#include <ctime>
#include <sstream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include "IMonitorModule.hpp"

class Rammodule : public Imonitormodule {
	private:
		int			_used;
		int			_unused;
		int			_total;
		void		_getRam(void);
		void		_allocateRam(std::string info);

	public:
		Rammodule(void);
		Rammodule(Rammodule const & rhs);
		~Rammodule(void);
		Rammodule & operator=(Rammodule const & rhs);
		float		getUsed(void) const;
		float		getUnused(void) const;
		float		getTotal(void) const;
};

#endif
