#include <iostream>

int main() {
	char ch = 'a';//不可用雙引號，且只能有一個字符
	std::cout << "ch = " << ch << std::endl;//不可用雙引號
	std::cout << "char占用" << sizeof(char) << "位元組" << std::endl;//char占用一位元組
	std::cout << (int)ch << std::endl;//字符所對應的ASCII編碼
	char ch2 = 97;
	std::cout << ch2 << std::endl;//也可直接用ASCII編碼來顯示對應字符
	std::cin.get();
	return 0;	
}
