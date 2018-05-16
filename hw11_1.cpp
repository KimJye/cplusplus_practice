#include <iostream>

using namespace std;
class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;

public:
	BoundCheckIntArray(int len) :arrlen(len)
	{
		arr = new int[len];
	}

	void operator=(const  BoundCheckIntArray& a) {
		if (arrlen < a.arrlen) {
			cout << "���̰� �۽��ϴ�." << endl;
			exit(1);
		}
		else {
			for (int i = 0; i < a.arrlen; ++i) {
				arr[i] = a.arr[i];
			}
			arrlen = a.arrlen;
		}
	}
	BoundCheckIntArray(const BoundCheckIntArray& a) {
		arrlen = a.arrlen;
		arr = new int[a.arrlen];
		for (int i = 0; i < a.GetArrLen(); i++) {
			arr[i] = a.arr[i];
		}

	}
	int& operator[] (int idx)
	{
		if (idx<0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}

	int operator[] (int idx) const
	{
		if (idx<0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}

		return arr[idx];
	}
	int GetArrLen() const
	{
		return arrlen;
	}


	~BoundCheckIntArray()
	{
		delete[]arr;
	}

	friend ostream& operator<<(ostream& os, const  BoundCheckIntArray& s);
	friend istream& operator >> (istream& is, BoundCheckIntArray&s);
};

ostream& operator<<(ostream& os, const  BoundCheckIntArray&s) {
	for (int i = 0; i < s.GetArrLen(); ++i) {
		os << i << "��°����: " << s.arr[i] << endl;
	}

	return os << endl;
}

istream& operator >> (istream& is, BoundCheckIntArray& s) {

	for (int i = 0; i < s.GetArrLen(); ++i) {
		cout << i << "��°����:";
		is >> s.arr[i];
	}

	return is;
}

int main(void) {

	cout << "hw11_1:������" << endl;

	BoundCheckIntArray arr(5);

	for (int i = 0; i<5; i++)
		arr[i] = (i + 1) * 11;

	cout << "arr ���" << endl; // cout ������ �ߺ�
	cout << arr << endl << endl;

	BoundCheckIntArray cpy1 = arr;    // ���������
	cout << "cpy1 ���" << endl;
	cout << cpy1 << endl << endl;

	BoundCheckIntArray cpy2(3);
	cout << "cpy2 �Է�" << endl;
	cin >> cpy2;    // cin ������ �ߺ�
	cout << "cpy2 ���" << endl;
	cout << cpy2 << endl << endl;

	BoundCheckIntArray cpy3(5);
	cpy3 = cpy2;   // ���� ������ �ߺ�
	cout << "cpy3 ���" << endl;
	cout << cpy3 << endl << endl;

}