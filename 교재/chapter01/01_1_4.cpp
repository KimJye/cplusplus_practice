/*
	김지혜
	20180416
	판매원들의 급여 개산 프로그램
	모든 판매원에게 매달 50만원 기본 급여와 물품 판매 가격의 12% 해당하는 돈 지급
*/

#include <iostream>

int main(void) {
	int price=0;//판매 금액
	int pay=50;//급여

	while (1) {
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end):";
		std::cin >> price;

		if (price == -1)
			break;
		std::cout << "이번달 급여:" << pay + (price*0.12) << std::endl;
	}
	std::cout << "프로그램을 종료합니다." << std::endl;
	return 0;
}