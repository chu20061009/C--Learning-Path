#include <iostream>

int main() {
	//加減乘除運算
	int n1 = 10;
	int n2 = 3;
	std::cout << n1 + n2 << std::endl;
	std::cout << n1 - n2 << std::endl;
	std::cout << n1 * n2 << std::endl;
	std::cout << n1 / n2 << std::endl;//因為是int，所以兩個整數相除結果只會有整數
	int n3 = 0;
	//std::cout << n1 / n3 << std::endl;  除數不可為0，錯誤
	double n4 = 0.5;
	double n5 = 0.22;
	std::cout << n4 / n5 << std::endl;//運算的結果也可為小數
	std::cin.get();
	return 0;	
}
