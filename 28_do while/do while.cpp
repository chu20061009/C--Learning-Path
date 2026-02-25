#include <iostream>

int main() {
	//do while 會先執行一次循環語句，再判斷條件循環
	int num = 0;
	do {
		std::cout << num << std::endl;
		num++;
	}	while (num < 10);
	std::cin.get();
	return 0;
}
