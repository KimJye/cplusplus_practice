/*
���ϸ�:hw1_3
�ۼ���:������
�ۼ���:20180327
*����:�Ʒ� �䱸 ������ �̿��Ͽ�
*����ڷκ��� 3���� ������ �Է¹޾� ���� ū ��, ���� ���� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
* myNs��� ���ӽ����̽��� �����.
* myNs��� ���ӽ����̽����� 3���� ���� �� �ִ밪�� ��ȯ�ϴ� myMax��� �Լ��� �ּҰ��� ��ȯ�ϴ� myMin�̶�� �Լ��� �߰��Ѵ�.
* ��, myNs ���ӽ����̽� ���� ���� �ȿ��� �Լ� ������Ÿ��(����)�� �����ؾ� �Ѵ�.
* �� �Լ� �κ��� ���Ǻκ��� ���ӽ����̽� ���� ���� �ۿ� �ۼ��Ѵ�.
* main������ �� �Լ��� ����Ͽ� ����Ѵ�.
*/
#include <iostream>

namespace myNs
{
	int Max(int, int, int);

	int Min(int, int, int);
}
int main(void)
{
	std::cout << "hw1_3:������" << std::endl;
	int num1, num2, num3;

	std::cout << "���� 3�� �Է�: ";
	std::cin >> num1 >> num2 >> num3;

	std::cout << "�ִ�:" << myNs::Max(num1, num2, num3) << std::endl;
	std::cout << "�ּڰ�:" << myNs::Min(num1, num2, num3) << std::endl;

	return 0;
}

int myNs::Max(int num1, int num2, int num3)
{
	int max = 0;

	if ((num1 > num2) && (num1>num3)) {
		max = num1;
		return max;
	}
	else if ((num2>num1) && (num2>num3)) {
		max = num2;
		return max;
	}
	else if ((num3 > num1) && (num3 > num2)) {
		max = num3;
		return max;
	}
}

int myNs::Min(int num1, int num2, int num3)
{
	int min = 0;

	if ((num1 < num2) && (num1 < num3)) {
		min = num1;
		return min;
	}
	else if ((num2 < num1) && (num2 < num3)) {
		min = num2;
		return min;
	}
	else if ((num3 < num1) && (num3 < num2)) {
		min = num3;
		return min;
	}
}

