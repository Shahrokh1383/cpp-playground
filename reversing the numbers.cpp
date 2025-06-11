//reversing the numbers part 1
/*#include <iostream>
using namespace std;
int reverse(int n)
{
	int sum = 0, i;
	while (n > 0)
	{
		i = n % 10;
		sum = sum * 10 + i;
		n = n / 10;
	}
	return sum;
}
int main()
{
	int num;
	cout << "enter the number :";
	cin >> num;
	cout << "the reversal number is :" << reverse(num);
	return 0;
}*/

//reversing the number part 2 with return function
/*#include <iostream>
#include<cmath>
using namespace std;
int reverse(int num)
{
	if (num < 10 && num >=0){
		return num;
	}
	else {
		return (num % 10) * pow(10, (int)log10(num)) + reverse(num / 10);
	}
}
int main()
{
	int num;
	cout << "enter the number : ";
	cin >> num;
	cout << "the reverse number : " << reverse(num) ;
	return 0;
}*/

//reversing the number part 3
/*#include <iostream>
using namespace std;
int main()
{
	int n, r = 0;
	cin >> n;
	for (; n != 0; n /= 10)
	{
		r = r * 10 + n % 10;
	}
	cout << "the r : " << r;
	return 0;
}*/