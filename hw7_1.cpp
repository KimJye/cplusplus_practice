/*
파일명:hw7_1
작성자:김지혜
작성일:20180418
내용- 
main 함수가 실행되도록 point 클래스를 상속받는 ColoredPoint 를 작성하여라

*/

#include <iostream>
#include <string>

using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
private:
	string color;
public:
	ColorPoint() :Point(0, 0) {
		color = "BLACK";
	}

	ColorPoint(int x, int y) : Point(x,y){}
	
	void show() {
		cout << color << "색으로" << "(" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
	}

	void setPoint(int x, int y) {
		move(x, y);
	}

	void setColor(string pcolor) {
		color = pcolor;
	}
};
int main() {
	cout << "hw7_1:김지혜" << endl;
	ColorPoint zeroPoint; // BLACK에 (0, 0) 위치의 점
	zeroPoint.show(); // zeroPoint를 출력한다.

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show(); // cp를 출력한다.
}