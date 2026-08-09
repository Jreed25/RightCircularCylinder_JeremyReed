// Main Implementation
#include <iostream>
#include <iomanip>
#include "Cylinder.h"
using namespace std;

int main()
{
	double radius;
	double height;


	Cylinder c;


	cout << "Enter the Cylinder's radius: ";
	cin >> radius;
	c.setRadius(radius);
	cout << "Enter the Cylinder's height: ";
	cin >> height;
	c.setHeight(height);
	

	cout << "\nHere is the cylinder's data:\n";
	cout << "Radius of the cylinder: " << c.getRadius() << endl;
	cout << "Height of the cylinder: " << c.getHeight() << endl << endl;
	cout << "Surface Area of the cylinder: " << setprecision(2) << fixed << showpoint << c.getSurfaceArea() << endl;
	cout << "Volume of the cylinder: " << setprecision(2) << fixed << showpoint << c.getVolume() << endl << endl;


	return 0;
}