/*
���ϸ�:hw7_1
�ۼ���:������
�ۼ���:20180418
����- 
main �Լ��� ����ǵ��� point Ŭ������ ��ӹ޴� ColoredPoint �� �ۼ��Ͽ���

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
		cout << color << "������" << "(" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
	}

	void setPoint(int x, int y) {
		move(x, y);
	}

	void setColor(string pcolor) {
		color = pcolor;
	}
};
int main() {
	cout << "hw7_1:������" << endl;
	ColorPoint zeroPoint; // BLACK�� (0, 0) ��ġ�� ��
	zeroPoint.show(); // zeroPoint�� ����Ѵ�.

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show(); // cp�� ����Ѵ�.
}