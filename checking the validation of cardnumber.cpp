//checking the validation of cardnumber 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int cardnumber[16];

bool isvaliddigit(char digit) {
	return isdigit(digit);
}

bool isvalidprefix(const string& prefix) {
	// List of our bank prefixes
	vector<string> validprefixes = { "6037", "6104", "5892", "6276", "6279" };

	// Checking whether the prefixes are available or not
	for (const string& validprefix : validprefixes) {
		if (prefix == validprefix) {
			return true;
		}
	}
	return false;
}

// Function to display the card number
void displayCardNumber() {
	cout << "Card number : ";
	for (int i = 0; i < 16; i++) {
		if (i % 4 == 0 && i != 0) {
			cout << "-";
		}
		cout << cardnumber[i];
	}
	cout << '\n';
}

int main() {
	int Inputindex = 0;
	while (Inputindex < 16) {
		char digit;
		cout << "Enter the digit " << Inputindex + 1 << " : ";
		cin >> digit;

		// Checking the validity of the digit
		if (!isvaliddigit(digit)) {
			cout << "Invalid digit. Please use valid digits.\n";
			continue;
		}

		// Transforming the digit to number
		int digitValue = digit - '0';

		// Saving in the array
		cardnumber[Inputindex] = digitValue;

		// Displaying the data
		displayCardNumber();

		// Checking the validation of first 4 digits
		if (Inputindex == 3) {
			string prefix = "";
			for (int i = 0; i < 4; i++) {
				prefix += to_string(cardnumber[i]);
			}
			if (!isvalidprefix(prefix)) {
				cout << "The card number is invalid.\n";
				return 1;
			}
		}
		Inputindex++;
	}

	cout << "The card number is successfully saved.\n";
	cout << "Formatted card number: ";
	for (int i = 0; i < 16; i++) {
		cout << cardnumber[i];
		if ((i + 1) % 4 == 0 && i != 15) {
			cout << "-";
		}
	}
	cout << endl;

	return 0;
}
