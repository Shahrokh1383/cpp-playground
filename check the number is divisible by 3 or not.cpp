//check the number is divisible by 3 or not
#include <iostream>
#include<conio.h>
using namespace std;
int sumDigits(int n) {
	if (n == 0) {
		return 0;
	}
	else {
		return n % 10 + sumDigits(n / 10);
	}
}
bool isDivisibleBythree(int n) {
	return sumDigits(n) % 3 == 0;
}
int main() {
	int number;
	cout << "enter the 5digit number : ";
	cin >> number;
	if (number < 10000 || number > 99999) {
		cout << "please enter 5 digit number : ";
		return 1;
	}
	int sum = sumDigits(number);
	if (isDivisibleBythree(number)) {
		cout << number << " is divisible by 3\n";
	}
	else {
		cout << number << " is not divisible by 3\n";
	}
	_getch();
	return 0;
}