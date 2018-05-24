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
	cout << "hw13_1:������" << endl;
	int x[] = { 1, 10, 100, 5, 4 };
	cout << "x �� ���� ū�� : " << biggest(x, 5) << endl;   // 5�� �迭 x�� ũ��
	double y[] = { 6.4, 3.3, -200.6, 7.7, 8.8, 20.3 };
	cout << "y �� ���� ū�� : " << biggest(y, 6);    // 6�� �迭 y�� ũ��
	cout << endl;
	return 0;

}
