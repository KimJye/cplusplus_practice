/*�������: �ӵ�, ������
	����Լ� :
	  �ʱ�ȭ(initMembers) - �ӵ�, ������ ������ �Է�
		  �������(print) - �ӵ�, ������ ������ ���
		  �ӵ�����(speedUp) - �ӵ��� 1 �����ϰ� ����� �ӵ��� ����
		  ����(changeGear) - �Ű������� ���� ������ �� ����

		  - main �Լ��� ������ ����

		  (1) �ڵ��� ��ü �ϳ� ����(myCar��� �θ���)
		  (2) myCar�� �ӵ��� 0, �� 1�� ����
		  (3) myCar �������
		  (4) myCar�� �ӵ����� �� 20�� ȣ��
		  (5) myCar �������
		  (6) myCar�� ���� �Լ��� ȣ���Ͽ� �� 2�� ����
		  (7) myCar �������
		  (8) myCar�� �ӵ����� �Լ��� 20�� ȣ��
		  (11) myCar �������

		  - �Է�: ����
		  - ��� : �ڵ��� ���� 4ȸ
*/

#include <iostream>
class Car
{	
private:
	 int carSpeed;//�ӵ�
	 int gear;//���� ���

public:
	void InitMember(int carSpeedp, int gearp);
	void Print();
	int SpeedUp();
	void ChangeGear(int gearp);

};

void Car::InitMember(int carSpeedp, int gearp) {
	carSpeed = carSpeedp;
	gear = gearp;
}

void Car::Print() {
	std::cout << "�ӵ�:" << Car::carSpeed<<",";
	std::cout << "���� ���:" << Car::gear << std::endl;

}

int Car::SpeedUp() {
	return carSpeed++;
}

void Car::ChangeGear(int gearp) {
	gear = gearp;
}
int main(void) {
	std::cout << "hw3_1:������" << std::endl;

	Car myCar;// �ڵ��� ��ü �ϳ� ����(myCar��� �θ���)
	myCar.InitMember(0, 1);//myCar�� �ӵ��� 0, �� 1�� ����
	myCar.Print();// myCar �������

	for (int i = 0; i < 20; ++i) {//myCar�� �ӵ����� �� 20�� ȣ��
		myCar.SpeedUp();
	}

	myCar.Print();// myCar �������

	myCar.ChangeGear(2);//myCar�� ���� �Լ��� ȣ���Ͽ� �� 2�� ����

	myCar.Print();// myCar �������

	for (int i = 0; i < 20; ++i) {//myCar�� �ӵ����� �� 20�� ȣ��
		myCar.SpeedUp();
	}

	myCar.Print();// myCar �������
}