// This program uses the Cylinder class, which is declared in
// the Cylinder.h file. The member Cylinder class's member
// functions are defined in the Cylinder.cpp file. 
#include <iostream>
#include <iomanip>
#include "Cylinder.h"
using namespace std;

int main()
{
	// Variables 
	double radius;
	double height;
	double surfaceArea;
	double volume;

	// Object
	Cylinder c;

	// Clear screen
	system("cls");

	// Ask for input
	// and store the width and length of the rectangle
	// in the box object.
	cout << "Enter the Cylinder's radius: ";
	cin >> radius;
	c.setRadius(radius);
	cout << "Enter the Cylinder's height: ";
	cin >> height;
	c.setHeight(height);
	
	// Display
	cout << "\nHere is the cylinders data:\n";
	cout << "Radius of the Cylinder: " << c.getRadius() << endl;
	cout << "Height of the Cylinder: " << c.getHeight() << endl << endl;
	cout << "Surface Area of the Cylinder: " << setprecision(2) << fixed << showpoint << c.getSurfaceArea() << endl;
	cout << "Volume of the Cylinder: " << setprecision(2) << fixed << showpoint << c.getVolume() << endl << endl;

	cout << "Programmer name: Jeremy Reed" << endl;
	system("pause");

	return 0;
}