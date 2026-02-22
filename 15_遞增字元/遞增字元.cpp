#include <iostream>

int main() {
	int n1 = 10;
	++n1;
	std::cout << "n1 = " << n1 << std::endl;//前置遞增
	int n2 = 20;
	n2++;
	std::cout << "n2 = " << n2 << std::endl;//後置遞增
	int n3 = 10;
	int n4 = ++n3 * 10;//前置遞增，先讓變量+1，再輸出結果
	std::cout << "n3 = " << n3 << std::endl;
	std::cout << "n4 = " << n4 << std::endl;
	int n5 = 10;
	int n6 = n5++ * 10;//後置遞增，先輸出結果，再讓變量+1
	std::cout << "n5 = " << n5 << std::endl;
	std::cout << "n6 = " << n6 << std::endl;
	std::cin.get();
	return 0;	
}
