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
	//if 和 switch 的區別
	//switch的缺點，判斷時只能是字元或整型，不可以是一個區間
	//switch的優點，結構清晰，執行效率高
	std::cin.get();
	return 0;
}
