#include <iostream>

int main() {
	//無條件跳轉
	std::cout << "1" << std::endl;
	std::cout << "2" << std::endl;
	goto FLAG;
	std::cout << "3" << std::endl;
	std::cout << "4" << std::endl;
	FLAG:
	std::cout << "5" << std::endl;
	std::cin.get();
	return 0;
}
