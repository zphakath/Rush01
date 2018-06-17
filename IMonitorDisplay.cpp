/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:46:03 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/17 14:53:03 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"
#include <ncurses.h>

IMonitorDisplay::IMonitorDisplay(void) {
}
IMonitorDisplay::~IMonitorDisplay(){
    return;
}
IMonitorDisplay::IMonitorDisplay(IMonitorDisplay const & rhs){
    *this = rhs;
}
IMonitorDisplay & IMonitorDisplay::operator=(IMonitorDisplay const &){
    return (*this);
}

bool				IMonitorDisplay::getDisplay(void) const { return (this->_ncursesDisplay); }
