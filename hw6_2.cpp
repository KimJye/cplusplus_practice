/*
���ϸ�:hw6_2
�ۼ���:������
�ۼ���:20180415

- Television Ŭ����

�������: �𵨸�, ����(������)
���� ����(Ŭ���� ����): numberOfTVs - ������ �ڷ����� ��ü ���� ���� ���� ����. 0���� �ʱ�ȭ

����Լ�:  hw6_1�� �Լ���  (�ʿ��� ��� �Լ� �� ������ ����)
������ ���� - �����Լ� showTvInfo �Լ����� ��������� ���� �����ϵ��� ����

�����Լ�: showTvIfo - tv ��ü�� �Ű������� �޾� �ڷ������� ������ ���ڿ��� ����� ���
"�𵨸�:" + tv.model + " ����:" + tv.price

*/
#include <iostream>
#include <string>

using namespace std;

class Television {

private:
	static int numberOfTVs;//������ �ڷ����� ��ü ���� ���� ���� ����
	string model;//�𵨸�
	int price;//����

public:
	Television() {
		model = "MyTV";
		price = 0;

		//numberOfTVs=numberOfTVs+1;

	}

	Television(string s) {

		this->Television::Television(s, 0);
		numberOfTVs = numberOfTVs + 1;

	}

	Television(string str, int v) {
		model = str;
		price = v;
		numberOfTVs = numberOfTVs + 1;

	}

	double getTax(int tax) {//���� ���  

		double result = tax*price;//����*����  
		return result;


	}

	void discount() {//�⺻����  

		price = price - (price*0.1);


	}

	void discount(int dis) {//��������  

		price = price - dis;


	}
	void print() {

		std::cout << "�𵨸�:" << model + ",����:" << price << std::endl;


	}
	string getModel() {

		return model;

	}
	int getPrice() const {
		return price;
	}

	void setModel(string n) {

		model = n;

	}

	void setPrice(int v) {

		price = v;

	}

	static int getNumberOfTVs() {
		return numberOfTVs;
	}

	friend static void showTvInfo(Television tv) {
		std::cout << "�𵨸�:" << tv.model << ",����:" << tv.price << std::endl;
	}

};

int Television::numberOfTVs = 0;//static ��������� �ʱ�ȭ

int main(void) {

	std::cout << "hw6_2:������" << std::endl;

	Television tv1;
	Television tv2("������");
	Television tv3("���", 20);

	showTvInfo(tv1);
	showTvInfo(tv2);
	showTvInfo(tv3);
}