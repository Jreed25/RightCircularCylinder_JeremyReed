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

	void setRadius(double radius);
	void setHeight(double height);

	double getRadius() const;
	double getHeight() const;
	double getSurfaceArea() const;
	double getVolume() const;
};
#endif
