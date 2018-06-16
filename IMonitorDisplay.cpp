/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:46:03 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/16 12:49:53 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay(){
    return;
}
IMonitorDisplay::~IMonitorDisplay(){
    return;
}
IMonitorDisplay::IMonitorDisplay(IMonitorDisplay const & rhs){

    *this = rhs;
    return;
}
IMonitorDisplay & IMonitorDisplay::operator=(IMonitorDisplay const & rhs){
    (void)rhs;
    return;
}

