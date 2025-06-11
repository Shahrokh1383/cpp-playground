//starpattern part1
/*#include <iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1 ; j <= i ; j++)
		{
			cout << '*';
		}
		cout << '\n';
	}
		return 0;
}*/

//starpattern part2
/*#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the number : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "*";
	}
	return 0;
}*/

//starpattern part3
/*#include <iostream>
using namespace std;
int main()
{
	int numofstars;
	cout << "enter the number of stars : ";
	cin >> numofstars;
	int initialspaces = 3 * (numofstars - 1);
	//print the upper part
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < initialspaces + i + numofstars - 2; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < numofstars; k++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	//print the middle part
	for (int i = 1; i <= numofstars * 5; i++)
	{
		cout << "*";
	}
	cout << '\n';
	//print the lower part
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < initialspaces + i + numofstars - 2; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < numofstars; k++)
		{
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}*/

//starpattern part 4
/*#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter the number : ";
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		//print the spaces
		for (int j = 1; j <= num - i; j++)
		{
			cout << " ";
		}
		//print the star
		for (int k = 1; k <= 2 * i; k++)
		{
			if (k % 2 == 0)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;

	}
	return 0;
}*/