#include <iostream>

int main() {
	float num1 = 1.23f;//7位數有效範圍，占4位元組
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "float占用的內存空間為: " << sizeof(num1) << "位元組" << std::endl;
	double num2 = 1.2345;//15~17位數有效範圍，占8位元組
	std::cout << "num2 = " << num2 << std::endl;
	std::cout << "double占用的內存空間為: " << sizeof(num2) << "位元組" << std::endl;
	//補充：科學記數法
	float f2 = 3e2; // 3 * 10 ^ 2
	std::cout << "f2 = " << f2 << std::endl;
	float f3 = 3e-2; // 3 * 0.1 ^ 2
	std::cout << "f3 = " << f3 << std::endl;
	std::cin.get();
	return 0;
}
