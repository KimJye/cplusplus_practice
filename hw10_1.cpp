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
		double getVolume() {
			return length * width*height;
		}
		void print() {
			cout << "상자의 길이: " << length << endl;
			cout << "상자의 너비:  " << width << endl;
			cout << "상자의 높이: " << height << endl;
			cout << "상자의 부피: " << getVolume() << endl << endl;
		}
		Box operator+(const Box &ref) {
			Box box(length + ref.length, width + ref.width, height + ref.height);
			return box;
		}

	};


int main(void) {
	std::cout << "hw10_1:김지혜" << std::endl;

	cout << endl;

	Box box1(10.0, 10.0, 10.0);
	Box box2(20.0, 20.0, 20.0);
	Box box3 = box1.operator+(box2);

	cout << "상자 #1" << endl;
	box1.print();
	cout << endl;
	cout << "상자 #2" << endl;
	box2.print();
	cout << endl;
	cout << "상자 #3" << endl;
	box3.print();

}
