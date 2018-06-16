/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dateTime.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:45:00 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/16 12:35:00 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATETIME_HPP
# define DATETIME_HPP

class DateTime {

    public:
        DateTime();
        ~DateTime();
        DateTime(DateTime const & rhs); 
        DateTime & operator=(DateTime const & rhs);
        void    diplaytime();
};
#endif