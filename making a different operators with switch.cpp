//making a different operators with switch
#include <iostream>
using namespace std;
int add(int a, char op, int b) {
	return a + b;
}
int subtraction(int a, char op, int b) {
	return a - b;
}
int power(int a,int b) {
	if (b == 0) {
		return 1;
	}
	else {
		return a * power(a, b - 1);
	}
}
int modules(int a, char op, int b) {
	return a % b;
}
int divide(int a, char op, int b) {
	return a / b;
}
int multiply(int a, char op, int b) {
	return a * b;
}
int main()
{
	int a, b;
	char op;
	char choice;
	cout << "enter + / - / * / (/) / ^ / %\n";
	cin >> choice;

	switch (choice)
	{
		case '+':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << add(a, op, b);
			break;
		case '-':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << subtraction(a, op, b);
			break;
		case '*':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << multiply(a, op, b);
			break;
		case '/':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << divide(a, op, b);
			break;
		case '^':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << power(a, b);
			break;
		case '%':
			cin >> a >> op >> b;
			cout << a << op << b << " = " << modules(a, op, b);
			break;
		default:
			cout << "wrong operator\n";

	}
	return 0;
}
