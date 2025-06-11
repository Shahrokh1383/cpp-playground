//checking the positivity , negativity or equality
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter the a: \n";
	cin >> a;
	cout << "enter the b: \n";
	cin >> b;
	cout << "*****************************************************\n";
	//finding the maximum number
	if (a > b) {
		cout << "max is: a\n";
	}
	else if (b > a) {
		cout << "max is: b\n";
	}
	else {
		if (a == b || b == a) {
			cout << "a and b are equal\n";
		}
	}//finding the max number is finished
	cout << "*****************************************************\n";
	//finding that the number is positive for a
	if (a > 0) {
		cout << "a is positive\n";
	}
	//finding that the number is negative for a
	else if (a < 0) {
		cout << "a is negative\n";
	}
	//finding that the number is 0 for a
	else
	{
		cout << "a is zero\n";
	}
	//finding that the number is positive for b
	if (b > 0) {
		cout << "b is positive\n";
	}
	//finding that the number is negative for b
	else if (b < 0) {
		cout << "b is negative\n";
	}
	//finding that the number is 0 for b
	else
	{
		cout << "b is zero\n";
	}//finding the number positive , negative
	cout << "*****************************************************\n";
	//comparing the negativity , positivity and zero between a and b
	if (a > 0 && b > 0)
	{
		cout << "both a and b are positive\n";
	}
	if (a < 0 && b < 0)
	{
		cout << "both a and b are negative\n";
	}
	if (a > 0 && b < 0)
	{
		cout << "a is positive and b is negative\n";
	}
	if (a < 0 && b >0)
	{
		cout << "a is negative and b is positive\n";
	}
	else if (a == 0 && b == 0)
	{
		cout << "both are zero\n";
	}//finish comparing
	return 0;
}