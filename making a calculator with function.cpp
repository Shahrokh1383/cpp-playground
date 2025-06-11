//making a calculator with function
#include <iostream>
using namespace std;
int calculator(int n1, int n2, char op)
{
	switch (op)
	{
	case '+':
		return n1 + n2;
		break;
	case '-':
		return n1 - n2;
		break;
	case '/':
		return n1 / n2;
		break;
	case '%':
		return n1 % n2;
		break;
	default:
		cout << "ERROR";
		break;
	}
}
int main()
{
	int n1, n2;
	char op;
	cin >> n1 >> op >> n2;
	int mycal = calculator(n1, n2, op);
	cout << "Result : " << mycal;
	return 0;
}