#include <iostream>
/*
���ϸ�:hw1_2
�ۼ���:������
�ۼ���:20180321
����: ����Ʈ �Ű����� ����� ����Ͽ� sum() �Լ��� �ۼ��Ѵ�.
sum�� ���� 2���� ���� ����� ���� �ְ� 3��, 4������ ������ ���� ����� ���ִ�.
*/

int sum(int num1, int num2, int num3 =0, int num4 =0) {
	return num1 + num2 + num3 + num4;
}
int main(void)
{
	std::cout << "hw1_2:������" << std::endl;
	std::cout << "sum(10, 15)=" << sum(10, 15) << std::endl;
	std::cout << "sum(10, 15, 25)=" << sum(10, 15, 25) << std::endl;
	std::cout << "sum(10, 15, 25, 30)=" << sum(10, 15, 25, 30) << std::endl;

	return 0;

}