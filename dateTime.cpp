/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dateTime.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:45:13 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/16 12:08:52 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

down vote
you can use asctime() function of time.h to get a string simply .

time_t _tm =time(NULL );

struct tm * curtime = localtime ( &_tm );
cout<<"The current date/time is:"<<asctime(curtime);



another one

tring currentDateToString()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    string dateString = "", tmp = "";
    tmp = numToString(ltm->tm_mday);
    if (tmp.length() == 1)
        tmp.insert(0, "0");
    dateString += tmp;
    dateString += "-";
    tmp = numToString(1 + ltm->tm_mon);
    if (tmp.length() == 1)
        tmp.insert(0, "0");
    dateString += tmp;
    dateString += "-";
    tmp = numToString(1900 + ltm->tm_year);
    dateString += tmp;
    dateString += " ";
    tmp = numToString(ltm->tm_hour);
    if (tmp.length() == 1)
        tmp.insert(0, "0");
    dateString += tmp;
    dateString += ":";
    tmp = numToString(1 + ltm->tm_min);
    if (tmp.length() == 1)
        tmp.insert(0, "0");
    dateString += tmp;
    dateString += ":";
    tmp = numToString(1 + ltm->tm_sec);
    if (tmp.length() == 1)
        tmp.insert(0, "0");
    dateString += tmp;

    return dateString;


    aother one 
#include<time.h>
#include<iostream>
using namespace std;

int main()
{
	char date[9];
	_strdate(date);
	cout << date << endl;
}
}

another one 
#include <iostream> 
#include <time.h>
using namespace std;

int main()
{
	time_t tim;  //create variable of time_t
	time(&tim); //pass variable tim to time function 
	cout << ctime(&tim); // this translates what was returned from time() into a readable format

	return 0;
}



*/