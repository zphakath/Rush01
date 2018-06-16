/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infoModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zphakath <zphakath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:47:56 by zphakath          #+#    #+#             */
/*   Updated: 2018/06/16 12:04:26 by zphakath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// geteuid() function
// int getlogin_r(char *buf, size_t bufsize);
// another option 
// bool isRoot(void) {return getuid()==0;}
// ComputerName and GetUserName

/* char *temp = 0;
    std::string computerName;

#if defined(WIN32) || defined(_WIN32) || defined(_WIN64)
    temp = getenv("COMPUTERNAME");
    if (temp != 0) {
        computerName = temp;
        temp = 0;
    }
#else
    temp = getenv("HOSTNAME");
    if (temp != 0) {
        computerName = temp;
        temp = 0;
    } else {
        temp = new char[512];
        if (gethostbyname(temp, 512) == 0) { // success = 0, failure = -1
            computerName = temp;
        }
        delete []temp;
        temp = 0;
    }
    */



    // defining the OS 

    /*
    f(OS_Windows)
    {
        MEMORYSTATUSEX statex;
        statex.dwLength = sizeof (statex);
        GlobalMemoryStatusEx (&statex);

        _tprintf (TEXT("There is  %*ld %% of memory in use.\n"),
                    WIDTH, statex.dwMemoryLoad);

    }


     char cmd[30];
        int flag = 0;
        FILE *fp;
        char line[130];
        int memTotal, memFree, memUsed;

        flag=0;
        memcpy (cmd,"\0",30);
        sprintf(cmd,"free -t -m|grep Total");
        fp = popen(cmd, "r");
        while ( fgets( line, sizeof line, fp))
        {
            flag++;
            sscanf(line,"%*s %d %d %d",&TotalMem, &TotalUsed, &TotalFree);
        }
        pclose(fp);

        if(flag)
            printf("TotalMem:%d -- TotalUsed:%d -- TotalFree:%d\n",TotalMem,TotalUsed,TotalFree);
        else
            printf("not found\n");

    }
*/