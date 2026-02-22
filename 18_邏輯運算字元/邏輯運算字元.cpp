#include <iostream>

int main() {
	//邏輯非 !
	int a = 10;//在C++中，除0以外皆為真
	std::cout << !a << std::endl;
	std::cout << !!a << std::endl;
	//邏輯與 &&
	int b1 = 20;
	int b2 = 0;
	int b3 = 0;
	std::cout << (a && b1) << std::endl;
	std::cout << (a && b2) << std::endl;
	std::cout << (b2 && b3) << std::endl;
	//邏輯或 ||
	std::cout << (a || b1) << std::endl;
	std::cout << (a || b2) << std::endl;
	std::cout << (b2 || b3) << std::endl;
	std::cin.get();
	return 0;
}
