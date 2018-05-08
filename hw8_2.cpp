#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name;
public:

	Animal() {}

	Animal(string n) {
		name = n;
	}
	~Animal() {}
	string getName() {
		return name;
	}
	virtual void sound() = 0;
	virtual void newYear() = 0;
	virtual void print() = 0;
};

class Dog :public Animal {
private:
	double speed=0;
public:
	Dog(string n, double s) :Animal(n) { speed = s; }
	~Dog() {}
	void sound() {
		cout << "�۸� " << getName() << std::endl;
	}
	void newYear() {
		speed += 5;
	}
	void print() {
		std::cout << getName() << " �ü�" << speed <<"km" << std::endl;
	}

};

class Person :public Animal {
private:
	int age;
public:
	Person(string n, int a) :Animal(n) { age = a; }
	~Person() {}
	void sound() {
		cout << "�ȳ� " << getName() << std::endl;
	}
	void newYear() {
		age++;
	}
	void print() {
		std::cout << getName() << " " << age << "��" << std::endl;
	}
};
int main(void) {

	std::cout << "hw8_2:������\n" << std::endl;
	
	Animal *animal [4];
	
	animal[0] = new Dog("������", 13.5);
	animal[1] = new Dog("������", 12.5);
	animal[2] = new Person("ȫ�浿", 20);
	animal[3] = new Person("�ڱ浿", 25);

	for (int i = 0; i < 4; ++i) {
		animal[i]->print();
	}
	std::cout << "\n" << std::endl;

	for (int i = 0; i < 4; ++i) {
		animal[i]->sound();
	}
	std::cout << "\n__________1�� ��________" << std::endl;
	for (int i = 0; i < 4; ++i) {
		animal[i]->newYear();
	}
	for (int i = 0; i < 4; ++i) {
		animal[i]->print();
	}
	std::cout << "\n__________2�� ��_________" << std::endl;
	for (int i = 0; i < 4; ++i) {
		animal[i]->newYear();
	}
	for (int i = 0; i < 4; ++i) {
		animal[i]->print();
	}
	return 0;
}