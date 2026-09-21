#include <iostream>
#include "swap.h"

/*
函數分文件編寫有4個步驟
1.創建後綴名為.h的頭文件
2.創建後綴名為.cpp的源文件
3.在頭文件中寫函數的聲明
4.在源文件中寫函數的定義
*/

//實現兩個數字進行交換的函數
/*void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
}
*/

int main() {

	int a = 10;
	int b = 20;
	swap(a, b);

	std::cin.get();
	return 0;
}
