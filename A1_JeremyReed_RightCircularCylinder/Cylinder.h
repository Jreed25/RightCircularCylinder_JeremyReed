// Specification file for the Cylinder class.
#ifndef CYLINDER_H
#define CYLINDER_H

// Cylinder class declaration

class Cylinder
{
private:
	double radius;
	double height;
	double pi;
public:
	Cylinder();	// Default constructor
	void setRadius(double);
	void setHeight(double);
	double getRadius() const;
	double getHeight() const;
	double getSurfaceArea() const;
	double getVolume() const;
};
#endif
