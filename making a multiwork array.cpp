//making a multiwork array
#include <iostream>
using namespace std;
void getarray(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "_enter the number : ";
		cin >> a[i];
	}

}
void printarray(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << "number " << i + 1 << " = ";
		cout << a[i] << '\n';
	}
}
int findmax(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
int findmin(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}
int Addarray(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}
float calculateAverage(int a[], int n) {
	float sum = Addarray(a, n);
	return sum / n;
}
void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void sortArray(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
int findindex(int a[], int n, int value)
{
	  sortArray(a, n);

  // Initialize rank to 1 (not 0, since ranks start from 1)
  int rank = 1;

  // Iterate through the sorted array
  for (int i = 0; i < n; i++) {
	// If the current element is the target value, return the rank
	if (a[i] == value) {
	  return rank;
	}

	// If the current element is greater than the target value, break the loop
	if (a[i] > value) {
	  break;
	}

	// Increment the rank for each smaller element
	rank++;
  }

  // If the value is not found, return -1 and give a good message
  cout << "The value " << value << " is not found in the array." << endl;
  return -1;
}
int main()
{
	int n[5];
	getarray(n, 5);
	sortArray(n, 5);
	printarray(n, 5);
	int maximum = findmax(n, 5);
	int minimum = findmin(n, 5);
	int sum = Addarray(n, 5);
	int average = calculateAverage(n, 5);
	cout << "the maximum number is : " << maximum << '\n';
	cout << "the minimum number is : " << minimum << '\n';
	cout << "the summation of numbers : " << sum << '\n';
	cout << "the average is : " << average << '\n';
	//finding an index
	cout << "do you want to find anything in the array ?";
	//string to say yes or no
	string a;
	cin >> a;
	//a number for searching
	int number;
	if (a == "yes") {
		cout << "what number do you looking for ? ";
		cin >> number;
		int fi = findindex(n, 5, number);
		cout << "the number your looking for is at index" << fi;
	}

	return 0;
}
