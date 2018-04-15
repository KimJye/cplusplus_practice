/*
파일명:hw6_2
작성자:김지혜
작성일:20180415

- Television 클래스

멤버변수: 모델명, 가격(정수형)
정적 변수(클래스 변수): numberOfTVs - 생성된 텔레비젼 객체 수를 세기 위한 변수. 0으로 초기화

멤버함수:  hw6_1의 함수들  (필요한 멤버 함수 및 생성자 수정)
프렌드 선언 - 전역함수 showTvInfo 함수에서 멤버변수에 직접 접근하도록 선언

전역함수: showTvIfo - tv 객체를 매개변수로 받아 텔레비젼의 정보를 문자열로 만들어 출력
"모델명:" + tv.model + " 가격:" + tv.price

*/
#include <iostream>
#include <string>

using namespace std;

class Television {

private:
	static int numberOfTVs;//생성된 텔레비젼 객체 수를 세기 위한 변수
	string model;//모델명
	int price;//가격

public:
	Television() {
		model = "MyTV";
		price = 0;

		//numberOfTVs=numberOfTVs+1;

	}

	Television(string s) {

		this->Television::Television(s, 0);
		numberOfTVs = numberOfTVs + 1;

	}

	Television(string str, int v) {
		model = str;
		price = v;
		numberOfTVs = numberOfTVs + 1;

	}

	double getTax(int tax) {//세액 계산  

		double result = tax*price;//세율*가격  
		return result;


	}

	void discount() {//기본할인  

		price = price - (price*0.1);


	}

	void discount(int dis) {//정액할인  

		price = price - dis;


	}
	void print() {

		std::cout << "모델명:" << model + ",가격:" << price << std::endl;


	}
	string getModel() {

		return model;

	}
	int getPrice() const {
		return price;
	}

	void setModel(string n) {

		model = n;

	}

	void setPrice(int v) {

		price = v;

	}

	static int getNumberOfTVs() {
		return numberOfTVs;
	}

	friend static void showTvInfo(Television tv) {
		std::cout << "모델명:" << tv.model << ",가격:" << tv.price << std::endl;
	}

};

int Television::numberOfTVs = 0;//static 멤버변수의 초기화

int main(void) {

	std::cout << "hw6_2:김지혜" << std::endl;

	Television tv1;
	Television tv2("김지혜");
	Television tv3("루비", 20);

	showTvInfo(tv1);
	showTvInfo(tv2);
	showTvInfo(tv3);
}