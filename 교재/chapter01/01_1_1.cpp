/*
	������
	20180415
	����ڷκ��� �� 5���� ���� �Է� �޾Ƽ� �� ���� ����ϴ� ���α׷�
*/
#include <iostream>

int main(void) {
	int number;
	int result = 0;

	for (int i = 1; i < 6; i++) {
		std::cout << i << "��° ���� �Է�:";
		std::cin >> number;
		std::cout << std::endl;
		result += number;
	}

	std::cout << "�հ�:" << result << std::endl;
	return 0;
}
