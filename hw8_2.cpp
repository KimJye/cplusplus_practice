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
		cout << "¸Û¸Û " << getName() << std::endl;
	}
	void newYear() {
		speed += 5;
	}
	void print() {
		std::cout << getName() << " ½Ã¼Ó" << speed <<"km" << std::endl;
	}

};

class Person :public Animal {
private:
	int age;
public:
	Person(string n, int a) :Animal(n) { age = a; }
	~Person() {}
	void sound() {
		cout << "¾È³ç " << getName() << std::endl;
	}
	void newYear() {
		age++;
	}
	void print() {
		std::cout << getName() << " " << age << "¼¼" << std::endl;
	}
};
int main(void) {

	std::cout << "hw8_2:±èÁöÇý\n" << std::endl;
	
	Animal *animal [4];
	
	animal[0] = new Dog("Áøµ¹ÀÌ", 13.5);
	animal[1] = new Dog("Áø¼øÀÌ", 12.5);
	animal[2] = new Person("È«±æµ¿", 20);
	animal[3] = new Person("¹Ú±æµ¿", 25);

	for (int i = 0; i < 4; ++i) {
		animal[i]->print();
	}
	std::cout << "\n" << std::endl;

	for (int i = 0; i < 4; ++i) {
		animal[i]->sound();
	}
	std::cout << "\n__________1³â ÈÄ________" << std::endl;
	for (int i = 0; i < 4; ++i) {
		animal[i]->newYear();
	}
	for (int i = 0; i < 4; ++i) {
		animal[i]->print();
	}
	std::cout << "\n__________2³â ÈÄ_________" << std::endl;
	for (int i = 0; i < 4; ++i) {
		animal[i]->newYear();
	}
	for (int i = 0; i < 4; ++i) {
		animal[i]->print();
	}
	return 0;
}