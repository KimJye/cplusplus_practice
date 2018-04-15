/*
김지혜
20180415
프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서,
입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.
*/
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string name;
	string tel;

	cout << "이름:";
	cin >> name;

	cout << "전화번호:";
	cin >> tel;

	cout << "이름:" << name << ",전화번호:" << tel << endl;
	return 0;
}