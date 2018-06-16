/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUmodule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:41:13 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/16 12:12:28 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// number of cores

/*
     SYSTEM_INFO sysInfo;
        GetSystemInfo(&sysInfo);
      cout << "Number of Cores: " << sysInfo.dwNumberOfProcessors << endl;






        int CPUInfo[4] = {-1};
        unsigned   nExIds, i =  0;
        char CPUBrandString[0x40];
        // Get the information associated with each extended ID.
        __cpuid(CPUInfo, 0x80000000);
        nExIds = CPUInfo[0];
        for (i=0x80000000; i<=nExIds; ++i)
        {
            __cpuid(CPUInfo, i);
            // Interpret CPU brand string
            if  (i == 0x80000002)
                memcpy(CPUBrandString, CPUInfo, sizeof(CPUInfo));
            else if  (i == 0x80000003)
                memcpy(CPUBrandString + 16, CPUInfo, sizeof(CPUInfo));
            else if  (i == 0x80000004)
                memcpy(CPUBrandString + 32, CPUInfo, sizeof(CPUInfo));
        }
        //string includes manufacturer, model and clockspeed
        cout << "CPU Type: " << CPUBrandString << endl;

    

    MEMORYSTATUSEX statex;
        statex.dwLength = sizeof (statex);
        GlobalMemoryStatusEx(&statex);
        cout << "Total System Memory: " << (statex.ullTotalPhys/1024)/1024 << "MB" << endl;
*/