#include <iostream>

int main() {
	bool flag = true; //true代表真，也就是1
	std::cout << flag << std::endl;
	bool flag2 = false; //false代表假，也就是0
	std::cout << flag2 << std::endl;
	std::cout << sizeof(bool) << std::endl;//bool所占用的空間為一位元組
	std::cin.get();
	return 0;	
}
