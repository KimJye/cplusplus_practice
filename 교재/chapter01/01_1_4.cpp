/*
	������
	20180416
	�Ǹſ����� �޿� ���� ���α׷�
	��� �Ǹſ����� �Ŵ� 50���� �⺻ �޿��� ��ǰ �Ǹ� ������ 12% �ش��ϴ� �� ����
*/

#include <iostream>

int main(void) {
	int price=0;//�Ǹ� �ݾ�
	int pay=50;//�޿�

	while (1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end):";
		std::cin >> price;

		if (price == -1)
			break;
		std::cout << "�̹��� �޿�:" << pay + (price*0.12) << std::endl;
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;
	return 0;
}