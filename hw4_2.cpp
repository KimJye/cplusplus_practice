/*
���ϸ�:hw4_2
�ۼ���:������
�ۼ���:20180405
����: �������: �𵨸�, ����(������)

����Լ�:  �� 11��
�𵨸��� getter�� setter
������ getter�� setter

������1 - �Ű������� ���� ����Ʈ ������. �𵨸��� "MyTV", ������ 0���� �ʱ�ȭ
������2 - �𵨸��� �Ű������� �޾� �ʱ�ȭ, ���� 0���� �ʱ�ȭ�ϵ�,
���� �ʵ尪�� �������� ���� ������3�� ȣ���Ͽ� �ʱ�ȭ
������3 - �𵨸�� ������ �Ű������� �޾� �ʱ�ȭ

getTax - ������ �Ű������� �޾� ������ ����Ͽ� ����
discount - �⺻���� - �Ű������� ������, 10% �����ϵ��� ���� ����
discount - �������� - ���ξ��� �Ű������� �޾� �� �ݾ׸�ŭ �����ϵ��� ���� ����

print - �ڷ������� ������ ���ڿ��� ����� ���
"�𵨸�:" + model + " ����:" + price

*/

#include <iostream>
#include <string>
using namespace std;
class Television {
private:
	string model;//�𵨸�
	int price;//����
public:
	Television() {
		model = "MyTV";
		price = 0;
	}

	Television(string s) {

		this->Television::Television(s, 0);
		
	}

	Television(string str, int v) {
		model = str;
		price = v;
	}

	double getTax(int tax) {//���� ���
		double result = tax*price;//����*����
		return result;
	}

	void discount() {//�⺻����
		price = price-(price*0.1);
	}
	void discount(int dis) {//��������
		price = price - dis;
	}
	void print() {
		std::cout << "�𵨸�:"<< model + ",����:"<< price << std:: endl;
	}
	string getModel()const {
		return model;
	}

	int getPrice() const{
		return price;
	}

	void setModel(string n) {
		model = n;
	}

	void setPrice(int v) {
		price = v;
	}
};

int main(void) {
	
	std::cout << "hw4_2:������" << std::endl;
	Television tv1;
	Television tv2("������");
	Television tv3("���", 1000000);

	tv1.print();
	tv2.print();
	tv3.print();

	tv3.discount(200000);
	tv3.discount();
	tv3.print();


}