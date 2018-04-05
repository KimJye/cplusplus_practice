/*
파일명:hw4_2
작성자:김지혜
작성일:20180405
내용: 멤버변수: 모델명, 가격(정수형)

멤버함수:  총 11개
모델명의 getter와 setter
가격의 getter와 setter

생성자1 - 매개변수가 없는 디폴트 생성자. 모델명은 "MyTV", 가격은 0으로 초기화
생성자2 - 모델명을 매개변수로 받아 초기화, 가격 0으로 초기화하되,
직접 필드값을 지정하지 말고 생성자3을 호출하여 초기화
생성자3 - 모델명과 가격을 매개변수로 받아 초기화

getTax - 세율을 매개변수로 받아 세액을 계산하여 리턴
discount - 기본할인 - 매개변수가 없으며, 10% 할인하도록 가격 설정
discount - 정액할인 - 할인액을 매개변수로 받아 그 금액만큼 할인하도록 가격 설정

print - 텔레비젼의 정보를 문자열로 만들어 출력
"모델명:" + model + " 가격:" + price

*/

#include <iostream>
#include <string>
using namespace std;
class Television {
private:
	string model;//모델명
	int price;//가격
public:
	Television() {
		model = "MyTV";
		price = 0;
	}

	Television(string s) {

		this->Television::Television(s, 0);
		
	}

	Television(string str, int v) {
		model = str;
		price = v;
	}

	double getTax(int tax) {//세액 계산
		double result = tax*price;//세율*가격
		return result;
	}

	void discount() {//기본할인
		price = price-(price*0.1);
	}
	void discount(int dis) {//정액할인
		price = price - dis;
	}
	void print() {
		std::cout << "모델명:"<< model + ",가격:"<< price << std:: endl;
	}
	string getModel()const {
		return model;
	}

	int getPrice() const{
		return price;
	}

	void setModel(string n) {
		model = n;
	}

	void setPrice(int v) {
		price = v;
	}
};

int main(void) {
	
	std::cout << "hw4_2:김지혜" << std::endl;
	Television tv1;
	Television tv2("김지혜");
	Television tv3("루비", 1000000);

	tv1.print();
	tv2.print();
	tv3.print();

	tv3.discount(200000);
	tv3.discount();
	tv3.print();


}