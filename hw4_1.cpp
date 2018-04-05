/*
���ϸ�:hw4_1
�ۼ���:20180404
�ۼ���:������
����:Ŭ����Box�� ������ ���� �����ϰ� �̿��ϴ� ���α׷��� �ۼ��Ͻÿ�.

- Box Ŭ����

������� : ����, �ʺ�, ����, empty(����ִ��� �׷��� ������)
����Լ� :
�������� getter�� setter
���� ����ϴ� getVolume
������ - �ߺ����� : ��� �����͸� ���� �� �ְ� �ϳ��� ���� ���� �� �ִ�(���� ���� ��� 5.0, 5.0, 5.0). ���� ������ box�� ����ִٰ� ����

*/
#include <iostream>

class Box {
private:
	double height;//����
	double width;//�ʺ�
	double length;//����
	bool empty;//����ִ��� �׷��� ������

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
	std::cout << "hw4_1:������" << std::endl;

	Box b1(3.5, 4.4, 5.0, false);
	Box b2;
	Box b3;
	
	int name;
	double result;

	b3.setHeight(4.0);
	b3.setLength(5.0);
	b3.setWidth(2.4);

	std::cout << "�ڽ� 1 ���Ǵ�:" << b1.print() << std::endl;
	std::cout << "�ڽ� 2 ���Ǵ�:" << b2.print() << std::endl;
	std::cout << "�ڽ� 3 ���Ǵ�:" << b3.print() << std::endl;

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
	std::cout << "�ڽ�" << name << "�� ���ǰ� ���� Ů�ϴ�:"<<result<< std::endl;
}