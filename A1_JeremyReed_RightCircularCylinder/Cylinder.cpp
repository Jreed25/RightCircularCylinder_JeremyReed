#include "Cylinder.h"	
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

// Construct initialize
Cylinder::Cylinder()
{
	radius = 0.0;		
	height = 0.0;
	pi = 3.14159;
}


// Set Functions
void Cylinder::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	else
	{
		cout << "Invalid radius\n";
		exit(EXIT_FAILURE);
	}
}


void Cylinder::setHeight(double h)
{
	if (h >= 0)
		height = h;
	else
	{
		cout << "Invalid height\n";
		exit(EXIT_FAILURE);
	}
}

// Get Functions
double Cylinder::getRadius() const
{
	return radius;
}


double Cylinder::getHeight() const
{
	return height;
}


double Cylinder::getSurfaceArea() const
{
	return 2 * pi * pow(radius, 2.0) + 2 * (pi * radius * height); 
}


double Cylinder::getVolume() const
{
	return pi * pow(radius, 2.0) * height;
}