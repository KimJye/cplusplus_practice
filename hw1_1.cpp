#include <iostream>
/*
파일명:hw1_1
작성자:김지혜
작성일:2018.03.21
내용: 사용자로부터 구의 반지름을 입력받아 구의 부피를 계산하여 출력하는 프로그램을 작성하시오.
부피를 계산하여 반환하는 inline 함수 calc_volume을 작성하여라
구의 반지름은 실수로 입력되며, 출력도 모두 실수형으로 하여야 한다.
*/
inline double calc_volume(double value)
{
	double pi = 3.14;//pi

	double result = (4.0 / 3.0)*pi*value*value*value;

	return result;
	

}
int main(void)
{
	std::cout << "hw1_1:김지혜" << std::endl;

	double value;

	std::cout << "구의 반지름: ";
	std::cin >> value;

	std::cout << "구의 부피 결과: " << calc_volume(value) << std::endl;
	return 0;
	
}