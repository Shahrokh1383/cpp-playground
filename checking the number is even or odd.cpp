//checking the number is even or odd
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number between 0-10 : ";
	do {
		cin >> num;
		if (num % 2 == 0)
		{
			cout << "it is even\n";
		}
		else {
			cout << "it is odd\n";
		}
		if (num > 5)
		{
			cout << "the number is above 5 \n";
		}
		else if (num < 5)
		{
			cout << "the number is below the 5 \n";
		}
	} while (num >= 0 && num <= 10);
	return 0;
}