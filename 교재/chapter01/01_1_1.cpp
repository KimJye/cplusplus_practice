/*
	김지혜
	20180415
	사용자로부터 총 5개의 정수 입력 받아서 그 합을 출력하는 프로그램
*/
#include <iostream>

int main(void) {
	int number;
	int result = 0;

	for (int i = 1; i < 6; i++) {
		std::cout << i << "번째 정수 입력:";
		std::cin >> number;
		std::cout << std::endl;
		result += number;
	}

	std::cout << "합계:" << result << std::endl;
	return 0;
}
