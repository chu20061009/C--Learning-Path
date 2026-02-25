#include <iostream>

int main() {
	int score = 10;
	std::cout << "請輸入分數(1~10)：" << std::endl;
	std::cin >> score;
	std::cout << "分數為" << score << std::endl;
	switch (score) {
	case 10:
		std::cout << "您認為很好" << std::endl;
		break;//退出
	case 9:
		std::cout << "您認為很好" << std::endl;
		break;
	case 8:
		std::cout << "您認為不錯" << std::endl;
		break;
	case 7:
		std::cout << "您認為不錯" << std::endl;
		break;
	case 6:
		std::cout << "您認為一般" << std::endl;
		break;
	case 5:
		std::cout << "您認為一般" << std::endl;
		break;
	default:
		std::cout << "您認為不好" << std::endl;
		break;
	}
	std::cin.get();
	return 0;
}
