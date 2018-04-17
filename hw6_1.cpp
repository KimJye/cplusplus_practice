/*
���ϸ�:hw6_1
�ۼ���:������
�ۼ���:20180415

- Television Ŭ����

�������: �𵨸�, ����(������)
���� ����(Ŭ���� ����): numberOfTVs - ������ �ڷ����� ��ü ���� ���� ���� ����. 0���� �ʱ�ȭ *****

����Լ�:  hw5_1�� 12��  (�ʿ��� ��� �Լ� �� ������ ����) ******
getNumberOfTVs - �ڷ����� ��ü ���� �����ϴ� �޼ҵ� *****

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
		
		numberOfTVs=numberOfTVs+1;
		
	}
	
	Television(string s) {
		
	this->Television::Television(s, 0);

	}
	
	Television(string str, int v) {
		model = str;
		price = v;
		numberOfTVs++;

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
	
};

int Television::numberOfTVs = 0;//static ��������� �ʱ�ȭ

int main(void) {

	cout << "hw6_1:������" << endl;

	cout << "�������� ������ �ڷ����� ��: " << Television::getNumberOfTVs() << endl;

	Television tv1;
	Television tv2("������");
	Television tv3("���", 20);
	
	tv1.print();
	tv2.print();
	tv3.print();

	cout << "�������� ������ �ڷ����� ��: " << Television::getNumberOfTVs() << endl;
	return 0;
}