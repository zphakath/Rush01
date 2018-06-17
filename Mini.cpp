
#include "Mini.hpp"

Mini::Mini(void) {
}

Mini::Mini(Mini const & rhs) { *this = rhs; }

Mini & Mini::operator=(Mini const &) {
	return (*this);
}

Mini::~Mini(void) { }
