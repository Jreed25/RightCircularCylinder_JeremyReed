// Implementation file for the Cylinder class
#include "Cylinder.h"	// Needed for cylinder class
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

//*************************************************************************
// The constructor initializes radius and height to 0, and pi to 3.14159. *
//*************************************************************************

Cylinder::Cylinder()
{
	radius = 0.0;		
	height = 0.0;
	pi = 3.14159;
}

//**********************************************************
// setRadius sets the value of the member variable radius. *
//**********************************************************

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

//**********************************************************
// setHeight sets the value of the member variable height. *
//**********************************************************
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

//*************************************************************
// getRadius returns the value in the member variable radius. *
//*************************************************************

double Cylinder::getRadius() const
{
	return radius;
}

//*************************************************************
// getHeight returns the value in the member variable height. *
//*************************************************************

double Cylinder::getHeight() const
{
	return height;
}

//************************************************************************
// getSurfaceArea returns the value in the member variable surface area. * 
//************************************************************************

double Cylinder::getSurfaceArea() const
{
	return 2 * pi * pow(radius, 2.0) + 2 * (pi * radius * height);
}

//***********************************************************
// getVolume returns the value in the member variable area. *
//***********************************************************

double Cylinder::getVolume() const
{
	return pi * pow(radius, 2.0) * height;
}