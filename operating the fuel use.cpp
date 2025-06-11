//operating the fuel use
#include<iostream>
using namespace std;
int main()
{
	 int fuel_left, usefuel;
	 cout << "how much fuel is left ? ";
	 cin >> fuel_left;
	 cout << "how much fuel does it burn in 100km ? ";
	 cin >> usefuel;
	 //callculating the km it can go
	 float distance = (fuel_left / usefuel) * 100;
	 if (distance < 100)
	 {
		 cout << "ERROR : fill up the gas";
	 }
	 else {
		 cout << "the possible distance to travel is about " << distance;
	 }
	return 0;
}
