/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:46:03 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/17 13:56:07 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"
#include <ncurses.h>

IMonitorDisplay::IMonitorDisplay(void) {
    initscr();
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	printw("Something");
	attroff(COLOR_PAIR(1));
	refresh();
	getch();
	endwin();
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
