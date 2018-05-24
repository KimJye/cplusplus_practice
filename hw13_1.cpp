#include <iostream>
using namespace std;

template <typename T>
T biggest(T array[], int len) {

	T max = array[0];

	for (int i = 1; i < len; ++i) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	return max;
}

int main(void)
{
	cout << "hw13_1:김지혜" << endl;
	int x[] = { 1, 10, 100, 5, 4 };
	cout << "x 중 가장 큰수 : " << biggest(x, 5) << endl;   // 5는 배열 x의 크기
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << "y 중 가장 큰수 : " << biggest(y, 6);    // 6는 배열 y의 크기
	cout << endl;
	return 0;

}
