//making a time class
#include <iostream>
#include<conio.h>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time(int HH, int MM, int SS) {

		hours = HH;
		minutes = MM;
		seconds = SS;

	}
	void printtime() {
		cout << hours << " : " << minutes << " : " << seconds;
	}

	int diff(const Time& other) {
		return (hours - other.hours) * 3600 + (minutes - other.minutes) * 60 + (seconds - other.seconds);
	}
};
int main()
{
	Time t1(23, 45, 59);
	Time t2(23, 45, 45);
	cout << "Time 1 - ";
	t1.printtime();
	cout << '\n';
	cout << "Time 2 - ";
	t2.printtime();
	cout << '\n';
	cout << "The difference between theese two times are (in seconds) : " << t1.diff(t2) << " seconds";
	_getch();
	return 0;
}
