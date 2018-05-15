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
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비:  " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl << endl;
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
	std::cout << "hw10_2:김지혜" << std::endl;

	cout << endl;

	Box box1(10.0, 10.0, 10.0);
	Box box2(20.0, 20.0, 20.0);
	

	cout << "상자 #1" << endl;
	box1.print();
	cout << endl;
	cout << "상자 #2" << endl;
	box2.print();
	
	cout << "결과는? " << compare(box1, box2) << endl;

}
