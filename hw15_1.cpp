/*
1~9������ �Է��� �޾� �������� ����ϴ� ���α׷��� �ۼ��϶�
*/
#include <iostream>
#include <string>

using namespace std;

void gugu(int gu) {
	for (int i = 1; i < 10; ++i) {
		cout << gu << "*" << i << "=" << gu*i<<" ";
	}
}
int main(void) {
	cout << "hw15_1:������" << endl;
	int num;
	string str="";

	while (1) 
	{		
		cout << "��� �Է�: ";
		cin >> num;

		try {
			if (cin.fail()) {
				throw str;
				
			}
			if ((1 > num) || (9 < num)) throw num;
			
			gugu(num);
			cout << endl;
		}
		catch (int ex) {
			cout << ex << "�� �߸��� �Է��Դϴ�. 1~9 ������ ������ �Է��ϼ���" << endl;
		}
		catch (string st) {
			cout << "�Է� ������ �߻��Ͽ� �� �̻� �Էµ��� �ʽ��ϴ�. ���α׷��� �����մϴ�" << endl;
			break;
		}
	}
	return 0;
}

