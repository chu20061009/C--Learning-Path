#include <iostream>

int *func(){
	int *p = new int (10);//new返回的是該數據類型的指標，在堆區創建整型數據
	return p;
}

void test01() {
	int* p = func();
	std::cout << *p << std::endl;
	delete p;
}

void test02() {//利用new創建數組
	int *arr = new int[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}

	for (int j = 0; j < 10; j++) {
		std::cout << arr[j] << std::endl;
	}
	delete[] arr;//釋放數組時要加[]才行
}

int main(){
	test01();
	test02();

	std::cin.get();
	return 0;
}
