#include <iostream>
#include "swap.h"

/*
ㄧ计だゅン絪糶Τ4˙艼
1.承后.h繷ゅン
2.承后.cpp方ゅン
3.繷ゅンい糶ㄧ计羘
4.方ゅンい糶ㄧ计﹚竡
*/

//龟瞷ㄢ计秈︽ユ传ㄧ计
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