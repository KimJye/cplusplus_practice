/*	
	김지혜
	20180416
	숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램.
*/

#include <iostream>

int main(void) {
	int number;

	std::cout << "숫자 입력:";
	std::cin >> number;

	std::cout << number << "단" << std::endl;

	for (int i = 1; i < 10; ++i) {
		std::cout << number << "*" << i << "=" << number*i << std::endl;
	}
	return 0;
}