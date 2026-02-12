#include <iostream>
#include <string>//使用string時要包含的頭文件

int main() {
	char str[] = "Hello World";//char 變量名[] = "字串"
	std::cout << str << std::endl;
	std::string str2 = "Hello World";//string 變量名 = "字串"
	std::cout << str2 << std::endl;
	std::cin.get();
	return 0;	
}
