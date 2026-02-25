#include <iostream>

int main() {
	//用於跳出循環結構或選擇結構
	std::cout << "請輸入您想要的難度的對應編號：" << std::endl;
	std::cout << "1.簡單" << std::endl;
	std::cout << "2.中等" << std::endl;
	std::cout << "3.困難" << std::endl;
	int select = 1;
	std::cin >> select;
	switch (select) {
	case 1:
		std::cout << "您選擇的是簡單難度" << std::endl;
		break;//退出switch語句
	case 2:
		std::cout << "您選擇的是中等難度" << std::endl;
		break;
	case 3:
		std::cout << "您選擇的是困難難度" << std::endl;
		break;
	default:
		std::cout << "錯誤" << std::endl;
		break;
	}





	for (int i = 0; i <= 10; i++) {
		
		if (i == 5) {
			break;//退出循環
		}
		else {
			std::cout << i << std::endl;
		}
	}




	
	for (int n = 1; n <= 10; n++) {
		for (int m = 1; m <= 10; m++) {
			if (m == 5) {
				break;//退出內層循環
			}
			std::cout << "* ";
		}
		std::cout << "\n";
	}
	std::cin.get();
	return 0;
}
