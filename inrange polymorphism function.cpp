//inrange polymorphism function 
#include <iostream>
using namespace std;
template <typename T>
int inrange(T x, T low, T high) {
	if (x >= low && x <= high) {
		return 0; // x is in range
	}
	else if (x < low) {
		return -1; // x is less than the range
	}
	else {
		return 1; // x is greater than the range
	}
}

int main() {
	int result1 = inrange(5, 1, 10);
	cout << "Result 1: " << result1 << endl; // Output should be 0

	int result2 = inrange('c', 'a', 'z');
	cout << "Result 2: " << result2 << endl; // Output should be 0

	int result3 = inrange(20, 1, 10);
	cout << "Result 3: " << result3 << endl; // Output should be 1

	int result4 = inrange(-5, 1, 10);
	cout << "Result 4: " << result4 << endl; // Output should be -1

	return 0;
}