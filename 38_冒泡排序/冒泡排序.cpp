#include <iostream>

int main() {

	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	for (int i = 0; i < 9; i++) {
		std::cout << arr[i];
	}
	std::cout << "\n";
	for (int i = 0; i < 9 - 1; i++) {//總共排序的輪數為元素個數-1
		for (int j = 0; j < 9-i-1; j++) {//總共排序的次數為元素個數-1-當前輪次 
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		std::cout << arr[i];
	}
	
	std::cin.get();
	return 0;
}
