//validating a phone number
#include <iostream>
#include <string>
using namespace std;
struct PhoneNumber
{
	string number;
};
bool validphonenumber(const PhoneNumber& pn) {

	if (pn.number.length() != 11) {
		return false;
	}
	if (pn.number[0] == '0' && pn.number[1] == '9') {
		return true;
	}
	//checking other chars are dgits
	for (int i = 2; i < pn.number.length(); i++) {
		if (!isdigit(pn.number[i]))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	PhoneNumber pn;
	cout << "please enter your phone number : ";
	cin >> pn.number;

	if (validphonenumber(pn))
	{
		cout << "the phone number is valid"<<'\n';
	}
	else {
		cout << "the phone number is invalid\n";
	}
	return 0;
}
