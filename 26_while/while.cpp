#include <iostream>

int main() {
	int num = 0;
	while (num < 10) {//若條件為真就會持續循環
		std::cout << num << std::endl;
		num++;
	}
	std::cin.get();
	return 0;
}
