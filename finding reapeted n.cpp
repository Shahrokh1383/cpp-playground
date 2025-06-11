//getting n time number and using array to find how many time does a number repeated
#include <iostream>
using namespace std;
int main() {
	const int MAX_NUMBERS = 100;
	int numbers[MAX_NUMBERS];
	int count[10] = { 0 }; // Array to count numbers from 1 to 9
	int num_entries = 0;
	int input;

	cout << "Enter numbers between 1 and 9 (Enter 0 to stop):" << endl;

	// Input loop
	while (true) {
		cin >> input;

		if (input == 0) {
			break;
		}
		else if (input >= 1 && input <= 9) {
			if (num_entries < MAX_NUMBERS) {
				numbers[num_entries++] = input; // algorithm to store the input in the array
				count[input]++;
			}
			else {
				cout << "Maximum number of entries reached!" << endl;
				break;
			}
		}
		else {
			cout << "Please enter a number between 1 and 9 or 0 to stop." << endl;
		}
	}

	// Display the counts of each number
	cout << "\nCounts of each number:" << endl;
	for (int i = 1; i <= 9; ++i) {
		cout << "Number " << i << ": " << count[i] << " times" << endl;
	}

	// Determine the number with the maximum and minimum count
	int max_count = count[1];
	int min_count = count[1];
	for (int i = 2; i <= 9; ++i) {
		if (count[i] > max_count) {
			max_count = count[i];
		}
		if (count[i] < min_count) {
			min_count = count[i];
		}
	}

	// Find all numbers with maximum and minimum counts
	cout << "\nNumber(s) with the highest count (" << max_count << " times): ";
	for (int i = 1; i <= 9; ++i) {
		if (count[i] == max_count) {
			cout << i << " ";
		}
	}
	cout << '\n';

	cout << "Number(s) with the lowest count (" << min_count << " times): ";
	for (int i = 1; i <= 9; ++i) {
		if (count[i] == min_count) {
			cout << i << " ";
		}
	}
	cout << '\n';

	return 0;
}
