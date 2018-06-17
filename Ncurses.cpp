
#include "Ncurses.hpp"
#include <ncurses.h>

std::string convert(unsigned int num) {
    std::stringstream stream;
    stream << num;
    std::string temp = stream.str();
    return (temp);
}
void    Ncurses::_displayInfo() {
    initscr();
    char    c;
    getmaxyx(stdscr,_maxY, _maxX);
    WINDOW * win = newwin(_maxY, _maxX, 0, 0);
    refresh();
    timeout(0);
    box(win, '*', '*');
    while((c = getch()) != 'x')
    {
        usleep(3000);
    mvwprintw(win, 2, 2, "******** System Info ********");
    mvwprintw(win, 3, 5, "Welcome :" );
    mvwprintw(win, 3, 22, this->_gr.getUsername().c_str());
    mvwprintw(win, 5, 5, "Date :" );
    mvwprintw(win, 5, 22, this->_gr.getDateTime().c_str());
    mvwprintw(win, 7, 5, "Host Name:" );
    mvwprintw(win, 7, 22, this->_gr.getHostName().c_str());
    mvwprintw(win, 9, 5, "Product Name:" );
    mvwprintw(win, 9, 22, this->_gr.getProductName().c_str());
    mvwprintw(win, 11, 5, "Product Version:" );
    mvwprintw(win, 11, 22, this->_gr.getProductVersion().c_str());
    mvwprintw(win, 13, 5, "BUild Version:" );
    mvwprintw(win, 13, 22, this->_gr.getBuildVersion().c_str());
    mvwprintw(win, 14, 1, " " );
    mvwprintw(win, 2, 60, "******** CPU  & RAM Info *******");
    mvwprintw(win, 3, 62, "CPU info :" );
    mvwprintw(win, 3, 77, this->_cpu.getCpuInfo().c_str());
    mvwprintw(win, 5, 62, "CPU Cores:" );
    mvwprintw(win, 5, 77, this->_cpu.getCores().c_str());
    mvwprintw(win, 7, 62, "CPU Speed:" );
    mvwprintw(win, 7, 77, this->_cpu.getCpuSpeed().c_str());
    mvwprintw(win, 9, 62, "Ram Used:" );
    mvwprintw(win, 9, 77, convert(this->_ram.getUsed()).c_str());
    mvwprintw(win, 11, 62, "Ram Unused:" );
    mvwprintw(win, 11, 77, convert(this->_ram.getUnused()).c_str());
    mvwprintw(win, 13, 62, "Ram Total :" );
    mvwprintw(win, 13, 77, convert(this->_ram.getTotal()).c_str());
    mvwprintw(win, 2, 120, "*********** Network *********");
    mvwprintw(win, 3, 122, "Packets in :" );
    mvwprintw(win, 3, 136, convert(this->_net.getIn()).c_str());
    mvwprintw(win, 5, 122, "Packets out:" );
    mvwprintw(win, 5, 136, convert(this->_net.getOut()).c_str());
    wrefresh(win); 
    refresh();
    this->_gr.refreshData();
	this->_cpu.refreshData();
	this->_ram.refreshData();
	this->_net.refreshData();
    }
    getch();
	endwin();
}

Ncurses::Ncurses(void) {
     _displayInfo();
}

Ncurses::Ncurses(Ncurses const & rhs) { *this = rhs; }

Ncurses & Ncurses::operator=(Ncurses const &) { return (*this); }

Ncurses::~Ncurses(void) {
    //clear();
    //refresh();
    endwin();
}

Ncurses::Ncurses(General & gi, CpuModule & cp, Rammodule & rm, 
					Network & nt) {
    this->_gr = gi;
    this->_cpu = cp;
    this->_ram = rm;
    this->_net = nt;
    _displayInfo();
}
