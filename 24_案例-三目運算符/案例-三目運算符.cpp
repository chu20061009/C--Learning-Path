#include <iostream>

int main() {
	int a = 20;
	int b = 10;
	int c = 0;
	c = (a > b ? a : b);
	std::cout << "c = " << c << std::endl;//三目運算符返回的是變量，可繼續被賦值
	(a > b ? a : b) = 100;
	std::cout << "a = " << a << std::endl;
	std::cin.get();
	return 0;
}
