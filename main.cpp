
#include "General.hpp"

int		main(void) {
	General	generalInfo;

	std::cout << "Host Name : " << generalInfo.getHostName() << std::endl;
	std::cout << "Username : " << generalInfo.getUsername() << std::endl;
}
