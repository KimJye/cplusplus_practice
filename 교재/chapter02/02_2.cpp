/*
	±èÁöÇı
	20180416
	const Æ÷ÀÎÅÍ º¹½À
*/
#include <iostream>

int main(void) {

	const int num = 12;

	const int * ptr = &num;

	const int *(&ref) = ptr;

	std::cout << *ptr << std::endl;
	std::cout << *ref << std::endl;

	return 0;

}