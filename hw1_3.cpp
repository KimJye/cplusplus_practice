/*
파일명:hw1_3
작성자:김지혜
작성일:20180327
*내용:아래 요구 사항을 이용하여
*사용자로부터 3개의 정수를 입력받아 가장 큰 수, 작은 수를 반환하는 프로그램을 작성하시오.
* myNs라는 네임스페이스를 만든다.
* myNs라는 네임스페이스에는 3개의 정수 중 최대값을 반환하는 myMax라는 함수와 최소값을 반환하는 myMin이라는 함수를 추가한다.
* 단, myNs 네임스페이스 정의 영역 안에는 함수 프로토타입(원형)만 선언해야 한다.
* 두 함수 부분의 정의부분은 네임스페이스 정의 영역 밖에 작성한다.
* main에서는 두 함수를 사용하여 출력한다.
*/
#include <iostream>

namespace myNs
{
	int Max(int, int, int);

	int Min(int, int, int);
}
int main(void)
{
	std::cout << "hw1_3:김지혜" << std::endl;
	int num1, num2, num3;

	std::cout << "정수 3개 입력: ";
	std::cin >> num1 >> num2 >> num3;

	std::cout << "최댓값:" << myNs::Max(num1, num2, num3) << std::endl;
	std::cout << "최솟값:" << myNs::Min(num1, num2, num3) << std::endl;

	return 0;
}

int myNs::Max(int num1, int num2, int num3)
{
	int max = 0;

	if ((num1 > num2) && (num1>num3)) {
		max = num1;
		return max;
	}
	else if ((num2>num1) && (num2>num3)) {
		max = num2;
		return max;
	}
	else if ((num3 > num1) && (num3 > num2)) {
		max = num3;
		return max;
	}
}

int myNs::Min(int num1, int num2, int num3)
{
	int min = 0;

	if ((num1 < num2) && (num1 < num3)) {
		min = num1;
		return min;
	}
	else if ((num2 < num1) && (num2 < num3)) {
		min = num2;
		return min;
	}
	else if ((num3 < num1) && (num3 < num2)) {
		min = num3;
		return min;
	}
}

