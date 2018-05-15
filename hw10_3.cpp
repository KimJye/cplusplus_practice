#include <iostream>
#include <ostream>
#include <iomanip>

using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time() {
		hours = 0;
		minutes = 0;
	}
	Time(int h, int m) {
		hours = h;
		minutes = m;
	}
	Time& operator++() {
		minutes++;
		if (minutes == 60) {
			minutes = 0;
			hours++;
		}
		return *this;
	}
	Time& operator+= (int x) {
		int h = (x / 60);
		int m = (x % 60);
		hours += h;
		minutes += m;
		return *this;
	}
	const Time operator++(int) {
		const Time retobj(hours, minutes);
		minutes += 1;
		return retobj;
	}
	friend ostream& operator<< (ostream&, const Time&);
};

ostream& operator<<(ostream& os, const Time& time) {
	os << '[' << time.hours << " : " <<setw(2)<<setfill('0')<< time.minutes << ']' << endl;
	return os;
}

int main(void) {
	std::cout << "hw10_:±èÁöÇı" << std::endl;
	Time t1(10, 59);

	cout << t1;
	++t1;
	cout << t1;
	t1++;
	cout << t1;
	t1+=125;
	cout << t1;

}