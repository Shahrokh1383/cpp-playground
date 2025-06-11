//finding max , min and average
#include <iostream>
using namespace std;
int findmax(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int finmin(const int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
int callgpa(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum / n;
}
int main()
{
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "enter the num :";
		cin >> a[i];
	}
	int LARGEST = findmax(a, 5);
	int SMALLEST = finmin(a, 5);
	float average = callgpa(a, 5);
	cout << "average is:" << average << '\n';
	cout << "largest is:" << LARGEST << '\n';
	cout << "smallest is:" << SMALLEST << '\n';
	return 0;
}
