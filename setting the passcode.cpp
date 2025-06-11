//setting the passcode
#include <iostream>
using namespace std;
int main()
{
	int pass;
	cout << "set the password : ";
	cin >> pass;
	int usepass;
	do {
		cout << "enter the password : ";
		cin >> usepass;
		if (usepass == pass)
		{
			cout << "welcome\n";
			break;
		}
	}while(pass != usepass);
	return 0;
}