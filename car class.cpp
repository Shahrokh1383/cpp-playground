//car class
#include <iostream>
#include <string>
using namespace std;
class car {
public :
	string model;
	string brand;
	int distancedriven;
	void drive(int kilometer) {
		distancedriven += kilometer;
	}
	void showdata()
	{
		cout << "Brand : " << brand << '\n';
		cout << "Model : " << model << '\n';
		cout << "Distance Driven : " << distancedriven << "Km" << '\n';
	}
};
int main()
{
	car mycar;
	cout << "Enter the brand of the car : ";
	cin >> mycar.brand;
	cout << "Enter the model of the car : ";
	cin >> mycar.model;
	cout << "Enter the initial kilometer :";
	cin >> mycar.distancedriven;
	int distance;
	cout << "Enter the distance driven :";
	cin >> distance;
	mycar.drive(distance);
	mycar.showdata ();
	return 0;
}