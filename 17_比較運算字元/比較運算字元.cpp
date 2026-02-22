#include <iostream>

int main() {
	//比較運算字元
	// ==
	int a1 = 10;
	int b1 = 20;
	std::cout << (a1 == b1) << std::endl;//要加()
	// !=
	std::cout << (a1 != b1) << std::endl;
	// >
	std::cout << (a1 > b1) << std::endl;
	// <
	std::cout << (a1 < b1) << std::endl;
	// >=
	std::cout << (a1 >= b1) << std::endl;
	// <=
	std::cout << (a1 <= b1) << std::endl;
	std::cin.get();
	return 0;
}
