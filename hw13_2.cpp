#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
};



template <class T>
T  bigger(T a, T b) { // �� ���� �Ű� ������ ���Ͽ� ū ���� ����
	if (a > b) return a;
	else return b;
};

template<>
Circle bigger(Circle a, Circle b) {
	if (a.getRadius() > b.getRadius())return a;
	else return b;
}

int main() {
	cout << "hw13_2:������" << endl;
	int a = 20, b = 50, c;
	c = bigger(a, b);
	cout << "20�� 50�� ū ���� " << c << endl;

	double d = 10.3, e = 20.4, f;
	f = bigger(d, e);
	cout << "10.3�� 20.4�� ū ���� " << f << endl;

	Circle waffle(10), pizza(20), y;
	y = bigger(waffle, pizza);
	cout << "waffle�� pizza �� ū ���� �������� " << y.getRadius() << endl;
}