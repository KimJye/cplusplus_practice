/*멤버변수: 속도, 현재기어
	멤버함수 :
	  초기화(initMembers) - 속도, 현재기어 정보를 입력
		  정보출력(print) - 속도, 현재기어 정보를 출력
		  속도증가(speedUp) - 속도를 1 증가하고 변경된 속도를 리턴
		  기어변속(changeGear) - 매개변수로 받은 값으로 기어를 변경

		  - main 함수는 다음을 수행

		  (1) 자동차 객체 하나 생성(myCar라고 부르자)
		  (2) myCar의 속도를 0, 기어를 1로 지정
		  (3) myCar 정보출력
		  (4) myCar의 속도증가 를 20번 호출
		  (5) myCar 정보출력
		  (6) myCar의 기어변속 함수를 호출하여 기어를 2로 변경
		  (7) myCar 정보출력
		  (8) myCar의 속도증가 함수를 20번 호출
		  (11) myCar 정보출력

		  - 입력: 없음
		  - 출력 : 자동차 정보 4회
*/

#include <iostream>
class Car
{	
private:
	 int carSpeed;//속도
	 int gear;//현재 기어

public:
	void InitMember(int carSpeedp, int gearp);
	void Print();
	int SpeedUp();
	void ChangeGear(int gearp);

};

void Car::InitMember(int carSpeedp, int gearp) {
	carSpeed = carSpeedp;
	gear = gearp;
}

void Car::Print() {
	std::cout << "속도:" << Car::carSpeed<<",";
	std::cout << "현재 기어:" << Car::gear << std::endl;

}

int Car::SpeedUp() {
	return carSpeed++;
}

void Car::ChangeGear(int gearp) {
	gear = gearp;
}
int main(void) {
	std::cout << "hw3_1:김지혜" << std::endl;

	Car myCar;// 자동차 객체 하나 생성(myCar라고 부르자)
	myCar.InitMember(0, 1);//myCar의 속도를 0, 기어를 1로 지정
	myCar.Print();// myCar 정보출력

	for (int i = 0; i < 20; ++i) {//myCar의 속도증가 를 20번 호출
		myCar.SpeedUp();
	}

	myCar.Print();// myCar 정보출력

	myCar.ChangeGear(2);//myCar의 기어변속 함수를 호출하여 기어를 2로 변경

	myCar.Print();// myCar 정보출력

	for (int i = 0; i < 20; ++i) {//myCar의 속도증가 를 20번 호출
		myCar.SpeedUp();
	}

	myCar.Print();// myCar 정보출력
}