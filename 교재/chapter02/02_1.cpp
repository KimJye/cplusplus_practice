/*
	김지혜
	20180416
	참조자 이용해서 함수 정의
*/

#include <iostream>

using namespace std;

void up(int &num) {
	num++;
}

void change(int &num) {
	num*=-1;
}
int main(void) {
	int value = -10;
	up(value);
	cout << value << endl;

	change(value);
	cout << value << endl;
	return 0;
}