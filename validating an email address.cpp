//validating an email address
/*#include <iostream>
#include <string>
using namespace std;
struct E_mail
{
	string address;
};
bool validAddress(const E_mail& email)
{
	const string& address = email.address;
	size_t atpos = address.find('@');
	size_t dotpos = address.find('.', atpos);
	//checking for existanse of atleast one '@' and '.'
	if (atpos == string::npos || dotpos == string::npos)
	{
		return false;
	}
	//checking for @ and . because they shouldn't be at index 1 and the last index
	if (atpos == 0 || atpos == address.length() - 1) {
		return false;
	}
	//checking the  . because it shouldn'n be immediatley after the @
	if (atpos == atpos + 1 || dotpos == address.length() - 1) {
		return false;
	}
	//checking the @ because it has to be one in the address
	if (address.find('@', atpos + 1) != string::npos) {
		return false;
	}
	return true;
}
int main()
{
	E_mail email;
	cout << "enter your email address : ";
	cin >> email.address;
	if (validAddress(email)) {
		cout << "valid email address" << '\n';
	}
	else {
		cout << "invalid email address\n";
	}
	return 0;
}*/

/*#include <iostream>
using namespace std;
struct email {
	char address[255];
	bool isvalid()
	{
		int countAtsign = 0, positionAt = -1, positionDot = -1;
		for (int i = 0; address[i] != '\0'; i++) {
			if (address[i] == '@') {
				countAtsign++;
				if (positionAt == -1) {
					positionAt = i;
				}
			}
			if (address[i] == '.') {
				positionDot = i;
			}

		}
		if (countAtsign == 1 && positionAt != 0 && positionAt < positionDot) {
			return true;
		}
		return false;
	}
};
int main()
{
	email e;
	cin >> e.address;
	if (e.isvalid()) {
		cout << "is valid";
	}
	else if (!e.isvalid())
	{
		cout << "is invalid";
	}

	return 2;
}*/
 
