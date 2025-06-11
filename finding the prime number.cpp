//finding the prime number 
#include <iostream>
#include <cmath>
using namespace std;
bool isprime(int n)
{
	if (n <= 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int number;
	cout << "enter the number : ";
	cin >> number;
	if (isprime(number))
	{
		cout << number << " is prime\n";
	}
	else {
		cout << number << " is not prime";
	}
	return 0;
}