/*
	������
	20180416
	SwapPoiner�Լ� �����غ���.
*/

#include <iostream>
using namespace std;

void SwapPointer(int *(&n1), int *(&n2)) {
	int *temp = n2;
	n2 = n1;
	n1 = temp;
}
int main(void) {
	
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);
	
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
	return 0;
}