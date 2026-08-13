#include <iostream>
#include <iomanip>
#include "Cylinder.h"


int main()
{
	double radius;
	double height;

	Cylinder c;


	std::cout << "Enter the cylinder's radius: ";
	std::cin >> radius;
	c.setRadius(radius);

	std::cout << "Enter the cylinder's height: ";
	std::cin >> height;
	c.setHeight(height);
	

	std::cout << "\nHere is the cylinder's data:\n";
	std::cout << "Radius of the cylinder: " << c.getRadius() << "\n";
	std::cout << "Height of the cylinder: " << c.getHeight() << "\n\n";
	
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Surface Area of the cylinder: " << c.getSurfaceArea() << "\n";
	std::cout << "Volume of the cylinder: " << c.getVolume() << "\n\n";


	return 0;
}