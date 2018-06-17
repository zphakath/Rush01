
#include "Mini.hpp"

Mini::Mini(void) {
}

Mini::Mini(General & gi, CpuModule & cp, Rammodule & rm, 
					Network & nt) {
    this->_gr = gi;
    this->_cpu = cp;
    this->_ram = rm;
    this->_net = nt;
}

Mini::Mini(Mini const & rhs) { *this = rhs; }

Mini & Mini::operator=(Mini const &) {
	return (*this);
}

Mini::~Mini(void) { }
