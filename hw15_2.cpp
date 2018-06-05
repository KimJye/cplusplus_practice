/*
김지혜
스택 예외처리하기
*/
#include <iostream>
#include <string>

using namespace std;

class Stack
{
	int sta[10];
	int index;
	string str = "";

public:
	Stack()
	{
		index = 0;
		for (int i = 0; i < 10; i++)
			sta[i] = 0;
	}
	void push(int a) 
	{
		if (sta[9] != 0) {
			str = "Stack Overflow";
			throw str;
		}
		sta[index] = a;
		index++;
	}
	void pop()
	{
		if (sta[0] == 0) {
			str = "Stack Underflow";
			throw str;
		}
		index--;
		sta[index] = 0;

	}
	void display()
	{
		cout << "------------------------------------------------------------------" << endl;
		for (int i = 0; i < index; i++)
		{
			cout << "스택" << "[" << i << "]" << "에 저장된값은 :" << sta[i] << endl;
		}
	}
};

int main()
{
	Stack s;

	cout << "hw15_2 : 김지혜" << endl;

	try
	{
		s.push(3);
		s.display();
		s.push(4);
		s.display();
		s.pop();
		s.display();
		s.pop();
		s.display();
		s.pop();
	}
	catch (string str) {
		cout << str << endl;
	}
	return 0;
}
