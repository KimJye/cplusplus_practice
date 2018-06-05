/*
작성자: 김지혜
작성일: 2018-05-30
문제 : 다음의 MyArray를 어떤 타입의 데이터(기본 타입)도 저장할 수 있는 MyArray 클래스로 변경하여라.
*/
#include <iostream>

using namespace std;

template <typename T>
class MyArray {
private:
	int *dataT;
	int size;   // 배열의 현재 크기
	int maxSize;   // 배열의 최대 크기
public:
	MyArray() {  // 배열의 크기를 설정하고 동적 메모리 할당
		maxSize = 10;
		size = -1;
		dataT = new T[maxSize];

	}
	~MyArray() {    // 동적 메모리 반환
		delete[]dataT;
	}
	void pushBack(T value) {  // 배열 끝에 데이터 추가
		size += 1;
		if (size > maxSize) {
			cout << "배열 최대 크기 넘음" << endl;
			return;
		}
		else {
			dataT[size] = value;
		}
		
	}
	void popBack(int index) {  // 배열 끝의 데이터 삭제
		if (size == 0) {
			cout << "빈 배열. 삭제 불가" << endl;
			return;
		}
		else {
			cout << "배열 끝의 데이터 삭제" << endl;
			--size;
		}


	}
	T getAt(int index) {   // 배열의 요소 반환
		cout << "배열 인덱스[" << index << "]의 값:";
		
		return dataT[index];
	}
	void setAt(int index, T value) { // 배열의 i변째 요소 value로 변경
		dataT[index] = value;
		cout << "배열 인덱스[" << index << "]의 값을 " << value << "로 변경" << endl;
	}
	int getSize() const {   // 배열의 크기 반환
		return size;
	}
	void showAll() {    // 모든 값 출력
		cout << "배열 내용 모든 값 출력:";
		for (int i = 0; i <= size; ++i) {
			cout << dataT[i];
			cout << " ";
		}
	}
};


int main(void) {
	cout << "hw13_3:김지혜" << endl;
	
	int num;

	MyArray<int>iarr;//(1) 정수형 MyArray를 생성.
	
	for (int i = 0; i < 3; ++i) {
		cout << "값 입력: ";//(2) 값을 사용자로 부터 3번 값을 받는다.
		cin >> num;
		iarr.pushBack(num);
	}
	iarr.showAll();//(3) 배열의 내용을 차례대로 출력
	cout << endl;
	cout<<iarr.getAt(1);//(4) 두번째 요소(인덱스[1])의 값 출력
	cout << endl;
	iarr.setAt(1, 20);//(5) 두번째 요소(인덱스[1])의 값을 20으로 변경
	iarr.showAll();//(6) 배열의 내용을 차례대로 출력
	cout << endl;
	iarr.popBack(iarr.getSize());//(7) 요소 삭제 한번 실행
	iarr.showAll();//(6) 배열의 내용을 차례대로 출력
	cout << endl;
}