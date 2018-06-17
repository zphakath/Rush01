
#include "General.hpp"
#include "CPUmodule.hpp"
#include "RAMmodule.hpp"
#include "Network.hpp"

int		main(void) {
	General		generalInfo;
	CpuModule	cpuModule;
	Rammodule	ramModule;
	Network		netModule;

	std::cout << "Host Name : " << generalInfo.getHostName() << std::endl;
	std::cout << "Username : " << generalInfo.getUsername() << std::endl;
	std::cout << "DateTime : " << generalInfo.getDateTime() << std::endl;
	std::cout << "ProductName : " << generalInfo.getProductName() << std::endl;
	std::cout << "ProductVersion : " << generalInfo.getProductVersion() << std::endl;
	std::cout << "BuildVersion : " << generalInfo.getBuildVersion() << std::endl;
	std::cout << "CPU Info : " << cpuModule.getCpuInfo() << std::endl;
	std::cout << "CPU Cores : " << cpuModule.getCores() << std::endl;
	std::cout << "Cpu Speed : " << cpuModule.getCpuSpeed() << std::endl;

	std::cout << "Ram Used : " << ramModule.getUsed() << std::endl;
	std::cout << "Ram Unused : " << ramModule.getUnused() << std::endl;
	std::cout << "Ram Total : " << ramModule.getTotal() << std::endl;

	std::cout << "Packets in : " << netModule.getIn() << std::endl;
	std::cout << "Packets out : " << netModule.getOut() << std::endl;


	/*while (true) {
		cpuModule.updateInfo();
	}*/
	return (0);
}
