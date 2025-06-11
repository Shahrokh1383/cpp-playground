//clock setting part 1
/*#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	int hour, minute;
	cout << "************ welcome to clock setting ************ : " << '\n';
	cout << "set the hour :";
	cin >> hour;
	cout << "set the minute :";
	cin >> minute;
	if (hour >= 12 && hour < 24)
	{
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << "PM\n";
	}
	else if (hour >= 0 && hour < 12)
	{
		cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << "AM\n";
	}
	while (hour >= 24)
	{
		cout << "wrong input!";
		break;
	}
	return 0;
}*/

//clock setting part 2
/*#include <iostream>
using namespace std;
int main()
{
	int hour;
	cout << "************ welcome to clock setting ************ : " << '\n';
	cout << "enter the hour :";
	cin >> hour;
	if (hour >= 12)
	{
		cout << hour << ":" << "00 " << "PM\n";
	}
	if (hour >= 9 && hour < 12)
	{
		cout << hour << ":" << "00 " << "AM\n";
	}
	else if (hour >= 0 && hour < 9)
	{
		cout << "0" << hour << ":" << "00 " << "AM\n";
	}
	return 0;
}*/
