#include <iostream>
/*
���ϸ�:hw1_1
�ۼ���:������
�ۼ���:2018.03.21
����: ����ڷκ��� ���� �������� �Է¹޾� ���� ���Ǹ� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���Ǹ� ����Ͽ� ��ȯ�ϴ� inline �Լ� calc_volume�� �ۼ��Ͽ���
���� �������� �Ǽ��� �ԷµǸ�, ��µ� ��� �Ǽ������� �Ͽ��� �Ѵ�.
*/
inline double calc_volume(double value)
{
	double pi = 3.14;//pi

	double result = (4.0 / 3.0)*pi*value*value*value;

	return result;
	

}
int main(void)
{
	std::cout << "hw1_1:������" << std::endl;

	double value;

	std::cout << "���� ������: ";
	std::cin >> value;

	std::cout << "���� ���� ���: " << calc_volume(value) << std::endl;
	return 0;
	
}