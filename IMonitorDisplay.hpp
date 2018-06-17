/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 12:42:18 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/17 12:57:21 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  IMONITORDISPLAY_HPP
#define IMONITORDISPLAY_HPP

class IMonitorDisplay{
	private:
		bool	_ncursesDisplay;

    public:
        IMonitorDisplay();
        ~IMonitorDisplay();
        IMonitorDisplay(IMonitorDisplay const & rhs);
        IMonitorDisplay & operator=(IMonitorDisplay const &);
		bool		getDisplay(void) const;
};
#endif
