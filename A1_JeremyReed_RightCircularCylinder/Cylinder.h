#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
private:
	double radius;
	double height;
	double pi;
public:
	Cylinder();	
	void setRadius(double);
	void setHeight(double);
	double getRadius() const;
	double getHeight() const;
	double getSurfaceArea() const;
	double getVolume() const;
};
#endif
