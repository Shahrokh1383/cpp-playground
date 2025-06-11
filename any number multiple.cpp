//any number multiple
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the numbers multiple : ";
	cin >> num;
	for (int i = 0; i <= 100; i += num)
	{
		cout << i << '\t';
	}
	return 0;
}