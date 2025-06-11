//cheching the strength of password pt1
/*#include <iostream>
#include <string>
using namespace std;

bool is_digit(char c) {
	return (c >= '0' && c <= '9');
}

bool is_alpha(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool is_lower(char c) {
	return c >= 'a' && c <= 'z';
}
bool is_upper(char c) {
	return c >= 'A' && c <= 'Z';
}
bool is_special(char c) {
	return !is_digit(c) && !is_alpha(c);
}

int calculatePasswordStrength(const string& password) {
	int lengthScore = 0;
	int digitScore = 0;
	int uppercaseScore = 0;
	int lowercaseScore = 0;
	int specialScore = 0;

	if (password.length() >= 6) {
		lengthScore = 20;
	}

	for (char c : password) {
		if (is_digit(c)) {
			digitScore = 20;
		}
		else if (is_alpha(c)) {
			if (is_lower(c)) {
				lowercaseScore = 20;
			}
			if (is_upper) {
				uppercaseScore = 20;
			}
		}
		else if (is_special(c)) {
			specialScore = 20;
		}
	}

	int total = lengthScore + digitScore + uppercaseScore + lowercaseScore + specialScore;
	return total;
}

int main() {
	string password;
	cout << "Enter the password : ";
	cin >> password;

	int passwordStrength = calculatePasswordStrength(password);
	cout << "Password strength : " << passwordStrength << "%";

	return 0;
}*/

//cheching the strength of password pt2
/*#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int calculatePasswordStrength(const string password) {
	int lengthsoce = 0;
	int digitscore = 0;
	int specialcharscor = 0;
	int uppercasescore = 0;
	int lowercasescore = 0;

	if (password.length() >= 6)
	{
		lengthsoce = 20;
	}
	for (char c : password)
	{
		if (isdigit(c))
		{
			digitscore = 20;
		}
		else if (isalpha(c))
		{
			if (!isalnum(c))
			{
				specialcharscor = 20;
			}
			if (isupper(c))
			{
				uppercasescore = 20;
			}
			if (islower(c))
			{
				lowercasescore = 20;
			}
		}
	}
	int totalsore = lengthsoce + digitscore + specialcharscor + uppercasescore + lowercasescore;
	return totalsore;
}
int main()
{
	string password;
	cout << "Enter the password : ";
	cin >> password;

	int strength = calculatePasswordStrength(password);
	cout << "Password strength : " << strength << '%';
	return 0;
}*/