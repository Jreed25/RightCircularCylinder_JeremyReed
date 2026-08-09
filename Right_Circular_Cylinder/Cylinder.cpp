#include "Cylinder.h"	
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


Cylinder::Cylinder()
{
	radius = 0.0;		
	height = 0.0;
	pi = 3.14159;
}


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
	// Surface area = 2(pi)r^2 + 2(pi)rh
	return 2 * pi * pow(radius, 2.0) + 2 * (pi * radius * height); 
}


double Cylinder::getVolume() const
{
	// Volume = (pi)(r^2)h
	return pi * pow(radius, 2.0) * height;
}