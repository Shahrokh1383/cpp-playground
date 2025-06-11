//ranking the students by score
#include <iostream>
using namespace std;
int main()
{
	float grade;
	string rank;
	bool is_conditional = false;
	cout << "enter the student's grade : ";
	cin >> grade;
	if (grade >= 17 && grade <= 20)
	{
		rank = "A";
	}
	else if (grade >= 14 && grade < 17)
	{
		rank = "B";
	}
	else if (grade >= 10 && grade < 14)
	{
		rank = "C";

	}
	else if (grade >= 0 && grade < 10)
	{
		rank = "D";
		is_conditional = true;
	}
	else {
		cout << "invalid grade please enter the number between 0 - 20 :"<<'\n';
		return 1;
	}
	//print rank
	cout << "Rank :" << rank << '\n';
	//print conditional status
	if (is_conditional)
	{
		cout << "conditional status : yes" << '\n';
	}
	else {
		cout << "conditional status : no" << '\n';
	}
	return 0;
}
