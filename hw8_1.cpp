#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	string name;
public:
	Animal(string n) {
		name = n;
	}
	~Animal() {}
	string getName() {
		return name;
	}
	virtual void sound()=0;
};

class Dog :public Animal {
	
public:
	Dog(string n):Animal(n) {}
	~Dog() {}
	void sound() {
		cout << "¸Û¸Û " << getName() << std::endl;
	}
	
};

class Person :public Animal {
public:
	Person(string n):Animal(n) {}
	~Person() {}
	void sound() {
		cout << "¾È³ç " << getName() << std::endl;
	}
};
int main(void) {

	std::cout << "hw8_1:±èÁöÇý" << std::endl;
	Dog dog("·çºñ");
	Person per("±èÁöÇý");

	dog.sound();
	per.sound();
	return 0;
}