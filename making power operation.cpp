//making power operation
#include <iostream>
using namespace std;
int power(int a, int b)
{
	int m = 1;
	for (int i = 1; i <= b; i++)
	{
		m *= a;
	}
	return m;
}
int main()
{
	int a, b;
	cout << "number : ";
	cin >> a;
	cout << "to power : ";
	cin >> b;
	int mypow = power(a, b);
	cout << "result : " << mypow;
	return 0;
}
