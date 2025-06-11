//calculating a circle
#include <iostream>
#include<conio.h>
using namespace std;
float calparameter(float r) {
	return 2 * 3.14 * r;
}
float calarea(float r) {
	return 3.14 * r * r;
}
int main() {
	float radius;
	cout << "set the radius : ";
	cin >> radius;
	float area = calarea(radius);
	float parameter = calparameter(radius);
	cout << "Area : " << area << " cm^2"<<'\n';
	cout << "Parameter : " << parameter << " cm\n";
	_getch();
	return 0;
}
