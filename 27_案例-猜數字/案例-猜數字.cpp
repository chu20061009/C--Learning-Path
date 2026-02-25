#include <iostream>
#include <ctime>

int main() {
	srand((unsigned int)time(NULL));//添加隨機數種子，避免每次生成的數字都一樣
	int num = rand() % 100 + 1;//生成0 + 1 ~99 + 1的隨機數
	int val = 0;
	std::cout << "請輸入您要猜的數字：" << std::endl;
	while (val != num) {
		std::cin >> val;
		if (val > num) {
			std::cout << "過大" << std::endl;
		}
		else if (val < num ){
			std::cout << "過小" << std::endl;
		}
		else {
			std::cout << "恭喜答對" << std::endl;
			break;//退出循環
		}
	}
	std::cin.get();
	return 0;
}
