#include <iostream>

int main() {
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	std::cout << "short占用的位元組為" << sizeof(num1) << std::endl;
	std::cout << "int占用的位元組為" << sizeof(num2) << std::endl;
	std::cout << "long占用的位元組為" << sizeof(num3) << std::endl;
	std::cout << "long long占用的位元組為" << sizeof(num4) << std::endl;
	std::cin.get();
	return 0;
}
//sizeof(數據類型or變量)
