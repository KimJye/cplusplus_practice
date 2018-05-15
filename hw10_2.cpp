#include <iostream>

using namespace std;

class Box {
	double length;
	double width;
	double height;
	bool isEmpty;
public:
	Box(double w, double l, double h) : length{ l }, width{ w }, height{ h } {
		isEmpty = true;
	}
	Box() : length{ 0 }, width{ 0 }, height{ 0 } {
		isEmpty = true;
	}
	double getVolume() const {
		return length * width*height;
	}
	void print() {
		cout << "������ ����: " << length << endl;
		cout << "������ �ʺ�:  " << width << endl;
		cout << "������ ����: " << height << endl;
		cout << "������ ����: " << getVolume() << endl << endl;
	}
	friend bool compare( const Box &box1, const Box &box2);
};

bool compare( const Box &box1, const Box &box2) {
	if (box1.getVolume() == box2.getVolume()) {
		return true;
	}
	else
		return false;
}


int main(void) {
	std::cout << "hw10_2:������" << std::endl;

	cout << endl;

	Box box1(10.0, 10.0, 10.0);
	Box box2(20.0, 20.0, 20.0);
	

	cout << "���� #1" << endl;
	box1.print();
	cout << endl;
	cout << "���� #2" << endl;
	box2.print();
	
	cout << "�����? " << compare(box1, box2) << endl;

}
