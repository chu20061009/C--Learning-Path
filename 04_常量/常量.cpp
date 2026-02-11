#include <iostream>

#define Week 7

int main() {
	std::cout << "一周總共有" << Week << "天" << std::endl;

	const int Month = 12;
	std::cout << "一年總共有" << Month << "個月" << std::endl;
	std::cin.get();
	return 0;
}
/*
常量不可被修改
define 用於條件編譯
const 更常用*/
