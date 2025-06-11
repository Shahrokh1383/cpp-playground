//finding and cunting the + , - , av
#include <iostream>
using namespace std;
int main()
{
	int a;
	int positive = 0,  negative = 0;
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter the number :";
		cin >> a;
		if (a > 0)
		{
			positive++;
		}
		else if (a < 0)
		{
			negative++;
		}
		sum += a;
	}
	double average = sum / 3;
	cout << "+ numbers are :" << positive<<'\n';
	cout << "- numbers are :" << negative<<'\n';
	cout << " the average is :" << average << '\n';
	return 0;
}
