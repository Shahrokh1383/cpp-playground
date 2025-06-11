//operating the weigth average
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3;
	int w1, w2, w3;
	cout << "enter the grade 1 and its number of units :\n";
	cin >> n1 >> w1;
	cout << "enter the grade 2 and its number of units :\n";
	cin >> n2 >> w2;
	cout << "enter the grade 3 and its number of units :\n";
	cin >> n3 >> w3;
	//operating the gpa
	double average = (w1 * n1 + w2 * n2 + w3 * n3) / (w1 + w2 + w3);
	cout << "the gpa is :" << average;
	return 0;
}