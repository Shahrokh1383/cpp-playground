//making a 3D point with struct
#include <iostream>
#include <cmath>
using namespace std;
struct Point3D {
	double x, y, z;
};

// Function to get a point from user input
Point3D getPoint(const string& prompt) {
	Point3D point;
	cout << prompt << endl;
	cout << "Enter x: ";
	cin >> point.x;
	cout << "Enter y: ";
	cin >> point.y;
	cout << "Enter z: ";
	cin >> point.z;
	return point;
}

// Function to calculate the distance between two points
double distance(const Point3D& p1, const Point3D& p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

// Function to check if the points are in the same plane and specify the plane
bool areInSamePlane(const Point3D& p1, const Point3D& p2) {
	if (p1.z == p2.z) {
		cout << "The two points are in the plane Z = " << p1.z << "." << endl;
		return true;
	}
	else {
		cout << "The two points are not in the same plane." << endl;
		return false;
	}
}

int main() {
	// Get points from the user
	Point3D point1 = getPoint("Please enter the coordinates for the first point:");
	Point3D point2 = getPoint("Please enter the coordinates for the second point:");

	// Calculate and display the distance between the two points
	double dist = distance(point1, point2);
	cout << "The distance between the two points is " << dist << " units." << endl;

	// Check if the points are in the same plane and display the result
	areInSamePlane(point1, point2);

	return 0;
}