//making a switch case for power , fibonachi , factoriel and multiply
#include<iostream>
using namespace std;
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}
int power(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	else {
		return base * power(base, exponent - 1);
	}
}
int fibo(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}
int multiply(int a, int b)
{
	return a * b;
}
int main()
{
	int n1, n2;
	int choice;
	cout << "enter character 1_for using fibo or 2_for using multiply or 3_for using fact or 4_for using power : ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "you're using a fibonachi algorithm \n";
		cout << "please enter the number : ";
		cin >> n1;
		cout << fibo(n1);
		break;
	case 2:
		cout << "you're using a multiply algorithm \n";
		cout << "enter the first number : ";
		cin >> n1;
		cout << "enter the second number : ";
		cin >> n2;
		cout << multiply(n1, n2);
		break;
	case 3:
		cout << "you're using a factoriel algorithm\n";
		cout << "enter the number : ";
		cin >> n1;
		cout << fact(n1);
		break;
	case 4:
		cout << "you're using a power algorithm \n";
		cout << "enter the number of base : ";
		cin >> n1;
		cout << "enter the number of exponent : ";
		cin >> n2;
		cout << power(n1, n2);
	default:
		cout << "invalid input";
		break;
	}
	return 0;
}
