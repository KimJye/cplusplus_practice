/*
 ���ϸ�:hw5_1
 �ۼ��� : ������
 �ۼ��� : 20180411
 ���� : ��������� ����
 ������� : �𵨸�, ����(������)

 ����Լ� : �� 11��
 �𵨸��� getter�� setter
 ������ getter�� setter

 ������1 - �Ű������� ���� ����Ʈ ������.�𵨸��� "MyTV", ������ 0���� �ʱ�ȭ
 ������2 - �𵨸��� �Ű������� �޾� �ʱ�ȭ, ���� 0���� �ʱ�ȭ�ϵ�,
 ���� �ʵ尪�� �������� ���� ������3�� ȣ���Ͽ� �ʱ�ȭ
 ������3 - �𵨸�� ������ �Ű������� �޾� �ʱ�ȭ

 getTax - ������ �Ű������� �޾� ������ ����Ͽ� ����
discount - �⺻���� - �Ű������� ������, 10 % �����ϵ��� ���� ����
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
				 	
					 price = price - (price*0.1);
				
				}
			 	
				 void discount(int dis) {//�������� 
				
					 price = price - dis;
				
				}
			 	void print() {
				 		std::cout << "�𵨸�:" << model + ",����:" << price << std::endl;
				
				}
			 	string getModel(){
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
			
};


 int main(void) {
	
		std::cout << "hw5_1:������" << std::endl;
	 	Television tv1;
		Television tv2 = tv1;
	

		tv1.print();
	 	tv2.print();

		tv2.setModel("YourTV");


		tv1.print();
		tv2.print();
		

		
}
