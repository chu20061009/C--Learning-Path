#include <iostream>

int main() {
	// = 最基礎，常用的賦值符號
	int n1 = 10;
	std::cout << "n1 = " << n1 << std::endl;
	n1 = 100;
	std::cout << "n1 = " << n1 << std::endl;
	// += 
	n1 = 10;
	n1 += 2;// n1 = n1 + 2
	std::cout << "n1 = " << n1 << std::endl;
	// -=
	n1 = 10;
	n1 -= 2;// n1 = n1 - 2
	std::cout << "n1 = " << n1 << std::endl;
	// *=
	n1 = 10;
	n1 *= 2;// n1 = n1 * 2
	std::cout << "n1 = " << n1 << std::endl;
	// /=
	n1 = 10;
	n1 /= 2;// n1 = n1 / 2
	std::cout << "n1 = " << n1 << std::endl;
	// %= 
	n1 = 10;
	n1 %= 2;// n1 = n1 % 2
	std::cout << "n1 = " << n1 << std::endl;

	std::cin.get();
	return 0;
}
