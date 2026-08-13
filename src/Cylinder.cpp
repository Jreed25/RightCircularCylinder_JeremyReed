#include "Cylinder.h"	
#include <iostream>
#include <cstdlib>


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
		std::cout << "Invalid radius\n";
		std::exit(EXIT_FAILURE);
	}
}


void Cylinder::setHeight(double h)
{
	if (h >= 0)
		height = h;
	else
	{
		std::cout << "Invalid height\n";
		std::exit(EXIT_FAILURE);
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
	return 2 * pi * radius * radius + 2 * pi * radius * height;
}


double Cylinder::getVolume() const
{
	// Volume = (pi)(r^2)h
	return pi * radius * radius * height;
}