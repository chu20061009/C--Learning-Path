#include <iostream>

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	std::cout << "請依序輸入三隻小豬的體重：" << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	if (num1 > num2) {
		if (num1 > num3) {
			std::cout << "第一隻最重" << std::endl;
		}
		else {
			std::cout << "第三隻最重" << std::endl;
		}
	}
	else {
		if (num2 > num3) {
			std::cout << "第二隻最重" << std::endl;
		}
		else {
			std::cout << "第三隻最重" << std::endl;
		}
	}

	std::cin.get();
	return 0;
}
