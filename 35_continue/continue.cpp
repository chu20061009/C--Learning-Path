#include <iostream>

int main() {
	//在循環語句中，跳過本次循環中尚未執行的語句，繼續執行下一循環
	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {
			continue;//偶數不輸出，可篩選條件，執行到此就不再向下，開始下一循環
		}
		std::cout << i << std::endl;
	}
	std::cin.get();
	return 0;
}
