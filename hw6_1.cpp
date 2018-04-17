/*
파일명:hw6_1
작성자:김지혜
작성일:20180415

- Television 클래스

멤버변수: 모델명, 가격(정수형)
정적 변수(클래스 변수): numberOfTVs - 생성된 텔레비젼 객체 수를 세기 위한 변수. 0으로 초기화 *****

멤버함수:  hw5_1의 12개  (필요한 멤버 함수 및 생성자 수정) ******
getNumberOfTVs - 텔레비젼 객체 수를 리턴하는 메소드 *****

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
		
		numberOfTVs=numberOfTVs+1;
		
	}
	
	Television(string s) {
		
	this->Television::Television(s, 0);

	}
	
	Television(string str, int v) {
		model = str;
		price = v;
		numberOfTVs++;

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
	
};

int Television::numberOfTVs = 0;//static 멤버변수의 초기화

int main(void) {

	cout << "hw6_1:김지혜" << endl;

	cout << "이제까지 생성된 텔레비전 수: " << Television::getNumberOfTVs() << endl;

	Television tv1;
	Television tv2("김지혜");
	Television tv3("루비", 20);
	
	tv1.print();
	tv2.print();
	tv3.print();

	cout << "이제까지 생성된 텔레비전 수: " << Television::getNumberOfTVs() << endl;
	return 0;
}