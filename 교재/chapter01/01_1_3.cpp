/*	
	������
	20180416
	���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷�.
*/

#include <iostream>

int main(void) {
	int number;

	std::cout << "���� �Է�:";
	std::cin >> number;

	std::cout << number << "��" << std::endl;

	for (int i = 1; i < 10; ++i) {
		std::cout << number << "*" << i << "=" << number*i << std::endl;
	}
	return 0;
}