/*
�ۼ���: ������
�ۼ���: 2018-05-30
���� : ������ MyArray�� � Ÿ���� ������(�⺻ Ÿ��)�� ������ �� �ִ� MyArray Ŭ������ �����Ͽ���.
*/
#include <iostream>

using namespace std;

template <typename T>
class MyArray {
private:
	int *dataT;
	int size;   // �迭�� ���� ũ��
	int maxSize;   // �迭�� �ִ� ũ��
public:
	MyArray() {  // �迭�� ũ�⸦ �����ϰ� ���� �޸� �Ҵ�
		maxSize = 10;
		size = -1;
		dataT = new T[maxSize];

	}
	~MyArray() {    // ���� �޸� ��ȯ
		delete[]dataT;
	}
	void pushBack(T value) {  // �迭 ���� ������ �߰�
		size += 1;
		if (size > maxSize) {
			cout << "�迭 �ִ� ũ�� ����" << endl;
			return;
		}
		else {
			dataT[size] = value;
		}
		
	}
	void popBack(int index) {  // �迭 ���� ������ ����
		if (size == 0) {
			cout << "�� �迭. ���� �Ұ�" << endl;
			return;
		}
		else {
			cout << "�迭 ���� ������ ����" << endl;
			--size;
		}


	}
	T getAt(int index) {   // �迭�� ��� ��ȯ
		cout << "�迭 �ε���[" << index << "]�� ��:";
		
		return dataT[index];
	}
	void setAt(int index, T value) { // �迭�� i��° ��� value�� ����
		dataT[index] = value;
		cout << "�迭 �ε���[" << index << "]�� ���� " << value << "�� ����" << endl;
	}
	int getSize() const {   // �迭�� ũ�� ��ȯ
		return size;
	}
	void showAll() {    // ��� �� ���
		cout << "�迭 ���� ��� �� ���:";
		for (int i = 0; i <= size; ++i) {
			cout << dataT[i];
			cout << " ";
		}
	}
};


int main(void) {
	cout << "hw13_3:������" << endl;
	
	int num;

	MyArray<int>iarr;//(1) ������ MyArray�� ����.
	
	for (int i = 0; i < 3; ++i) {
		cout << "�� �Է�: ";//(2) ���� ����ڷ� ���� 3�� ���� �޴´�.
		cin >> num;
		iarr.pushBack(num);
	}
	iarr.showAll();//(3) �迭�� ������ ���ʴ�� ���
	cout << endl;
	cout<<iarr.getAt(1);//(4) �ι�° ���(�ε���[1])�� �� ���
	cout << endl;
	iarr.setAt(1, 20);//(5) �ι�° ���(�ε���[1])�� ���� 20���� ����
	iarr.showAll();//(6) �迭�� ������ ���ʴ�� ���
	cout << endl;
	iarr.popBack(iarr.getSize());//(7) ��� ���� �ѹ� ����
	iarr.showAll();//(6) �迭�� ������ ���ʴ�� ���
	cout << endl;
}