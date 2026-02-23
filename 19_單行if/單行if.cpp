#include <iostream>

int main() {
	int score = 0;
	std::cout << "請輸入你的分數：" << std::endl;
	std::cin >> score;
	std::cout << "你的分數為：" << score << std::endl;
	if( score > 50 ){//if後不用加分號
		std::cout << "666這個入是桂" << std::endl;
	}
	std::cin.get();
	return 0;
}
