#include "Cylinder.h"
#include "cmath"

Cylinder::Cylinder()
{
	radius = 0.0;
	height = 0.0;
}

Cylinder::~Cylinder()
{
}

void Cylinder::setRadius(double r)
{
	radius = r;
}

void Cylinder::setHeight(double h)
{
	height = h; 
}

double Cylinder::getRadius()
{
	return radius;
}

double Cylinder::getHeight()
{
	return height;
}

double Cylinder::calculateVolume()
{
	return pi*pow(radius, 2)*height;
}

double Cylinder::calculateSurfaceArea()
{
	return 2*pi*radius*height+2*pi*pow(radius, 2);
}
