// Main Implementation
#include <iostream>
#include <iomanip>
#include "Cylinder.h"
using namespace std;

int main()
{
	double radius;
	double height;
	double surfaceArea;
	double volume;

	Cylinder c;

	system("cls");


	cout << "Enter the Cylinder's radius: ";
	cin >> radius;
	c.setRadius(radius);
	cout << "Enter the Cylinder's height: ";
	cin >> height;
	c.setHeight(height);
	

	cout << "\nHere is the cylinders data:\n";
	cout << "Radius of the Cylinder: " << c.getRadius() << endl;
	cout << "Height of the Cylinder: " << c.getHeight() << endl << endl;
	cout << "Surface Area of the Cylinder: " << setprecision(2) << fixed << showpoint << c.getSurfaceArea() << endl;
	cout << "Volume of the Cylinder: " << setprecision(2) << fixed << showpoint << c.getVolume() << endl << endl;

	system("pause");

	return 0;
}