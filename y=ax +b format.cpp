//y=ax +b format
#include <iostream>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	cout << "enter the coordination of point(x1 ,y1) :";
	cin >> x1 >> y1;
	cout << "enter the coordination of point (x2 ,y2) :";
	cin >> x2 >> y2;
	if (x1 == x2)
	{
		cout << "the format is not y = ax +b"<<'\n';
		cout << "the equation is :" << x1 << '\n';
	}
	else {
		float a = (y2 - y1) / (x2 - x1);
		float b = y1 - a * x1;
		cout << "y =" << a << "x+ " << b << '\n';
	}
	return 0;
}
