//finding whether the char is number or not
#include <iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= '0' && a <= '9')
	{
		cout << "it is a number " << '\n';
	}
	else {
		cout << "it is not a number " << '\n';
	}
	return 0;
}
