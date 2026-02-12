#include <iostream>
#include <string>

int main() {
	int a = 0;//整數的輸入
	std::cout << "請為a輸入任意整數值：" << std::endl;
	std::cin >> a;
	std::cout << "a = " << a << std::endl;

	float f = 3.14f;//小數的輸入
	std::cout << "請為f輸入任意小數值：" << std::endl;
	std::cin >> f;
	std::cout << "f = " << f << std::endl;

	char ch = 'a';//字符的輸入
	std::cout << "請為ch輸入任意字符：" << std::endl;
	std::cin >> ch;
	std::cout << "ch = " << ch << std::endl;
	
	std::string str = "Hello";//字串的輸入
	std::cout << "請為str輸入任意字串：" << std::endl;
	std::cin >> str;
	std::cout << "str = " << str << std::endl;
	
	bool flag = true;//布林值的輸入
	std::cout << "請為flag輸入任意布林值：" << std::endl;
	std::cin >> flag;
	std::cout << "flag = " << flag << std::endl;//會發現非0的數皆為真
	std::cin.get();
	return 0;	
}
