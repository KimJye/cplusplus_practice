#include <iostream>
/*
파일명:hw1_2
작성자:김지혜
작성일:20180321
내용: 디펄트 매개변수 기능을 사용하여 sum() 함수를 작성한다.
sum은 정수 2개의 합을 계산할 수도 있고 3개, 4개까지 정수의 합을 계산할 수있다.
*/

int sum(int num1, int num2, int num3 =0, int num4 =0) {
	return num1 + num2 + num3 + num4;
}
int main(void)
{
	std::cout << "hw1_2:김지혜" << std::endl;
	std::cout << "sum(10, 15)=" << sum(10, 15) << std::endl;
	std::cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << std::endl;
	std::cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << std::endl;

	return 0;

}