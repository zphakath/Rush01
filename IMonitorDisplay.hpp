/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:42:18 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/16 12:45:39 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  IMONITORDISPLAY_HPP
# deifne IMONITORDISPLAY_HPP

class IMonitorDisplay{

    public:
        IMonitorDisplay();
        ~IMonitorDisplay();
        IMonitorDisplay(IMonitorDisplay const & rhs);
        IMonitorDisplay & operator=(IMonitorDisplay const & rhs);
};
#endif