#include <iostream>

int main() {
	//取餘數運算
	int n1 = 10;
	int n2 = 3;
	std::cout << n1 % n2 << std::endl;
	int n3 = 0;
	//std::cout << n1 % n3 << std::endl;除數不可為0，即便是取餘數時
	double d1 = 3.14;
	double d2 = 1.1;
	//std::cout << d1 % d2 << std::endl;兩個小數不可做取餘數計算 
	std::cin.get();
	return 0;	
}
