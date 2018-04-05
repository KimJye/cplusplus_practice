/*
파일명:hw4_1
작성일:20180404
작성자:김지혜
내용:클래스Box를 다음과 같이 정의하고 이용하는 프로그램을 작성하시오.

- Box 클래스

멤버변수 : 높이, 너비, 길이, empty(비어있는지 그렇지 않은지)
멤버함수 :
각변수의 getter와 setter
부피 계산하는 getVolume
생성자 - 중복정의 : 모든 데이터를 받을 수 있고 하나도 받지 않을 수 있다(받지 않은 경우 5.0, 5.0, 5.0). 새로 생성된 box는 비어있다고 가정

*/
#include <iostream>

class Box {
private:
	double height;//높이
	double width;//너비
	double length;//길이
	bool empty;//비어있는지 그렇지 않은지

public:
	Box(double h, double w, double l, bool e) {
		height = h;
		width = w;
		length = l;
		empty = e;
	}

	Box(){
		height = 5.0;
		width = 5.0;
		length = 5.0;
		empty = false;
	}

	double getHeight()const {
		return height;
	}
	double getWidth()const {
		return width;
	}
	double getLength()const {
		return length;
	}
	bool getEmpty()const {
		return empty;
	}

	void setHeight(double h) {
		height = h;
	}
	void setWidth(double w) {
		width = w;
	}
	void setLength(double l) {
		length = l;
	}
	void setEmpty(bool e){
		empty = e;
	}
	double getVolume()const {
		return height*width*length;
	}
	double Box::print() {
		return getVolume();
	}
	int Box::compare() {
		
	}
};

int main(void) {
	std::cout << "hw4_1:김지혜" << std::endl;

	Box b1(3.5, 4.4, 5.0, false);
	Box b2;
	Box b3;
	
	int name;
	double result;

	b3.setHeight(4.0);
	b3.setLength(5.0);
	b3.setWidth(2.4);

	std::cout << "박스 1 부피는:" << b1.print() << std::endl;
	std::cout << "박스 2 부피는:" << b2.print() << std::endl;
	std::cout << "박스 3 부피는:" << b3.print() << std::endl;

	if ((b1.getVolume() > b2.getVolume()) && (b1.getVolume() > b3.getVolume())){
		name = 1;
		result = b1.getVolume();
	}
	else if ((b2.getVolume() > b1.getVolume()) && (b2.getVolume() > b3.getVolume())) {
		name = 2;
		result = b2.getVolume();
	}
	else if ((b3.getVolume() > b1.getVolume()) && (b3.getVolume() > b2.getVolume())) {
		name = 3;
		result = b3.getVolume();
	}
	std::cout << "박스" << name << "의 부피가 가장 큽니다:"<<result<< std::endl;
}