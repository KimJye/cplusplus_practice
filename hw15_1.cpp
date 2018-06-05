/*
1~9까지의 입력을 받아 구구단을 출력하는 프로그램을 작성하라
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
	cout << "hw15_1:김지혜" << endl;
	int num;
	string str="";

	while (1) 
	{		
		cout << "양수 입력: ";
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
			cout << ex << "는 잘못된 입력입니다. 1~9 사이의 정수만 입력하세요" << endl;
		}
		catch (string st) {
			cout << "입력 오류가 발생하여 더 이상 입력되지 않습니다. 프로그램을 종료합니다" << endl;
			break;
		}
	}
	return 0;
}

