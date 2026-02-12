#include <iostream>

int main() {
	std::cout << "Hello World\n" << std::endl;//\n代表換行
	std::cout << "\\" << std::endl;/*\\代表輸出一個\     */
	std::cout << "abc\tdef" << std::endl;//\t代表水平製表符，用來對齊輸出數據
	std::cin.get();
	return 0;	
}
