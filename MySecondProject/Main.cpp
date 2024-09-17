/*
	Jakobe Lahr 
	Computer Science FA_24
	Due: 9/17/24
	Lab 2: Lab 2 is a simple program to output the surface area, volume, height, and radius
	of a cylinder when providing a given radius and height measurment using a header 
	file and another source file to teach us to keep everything organized and understandable.
*/

#include "Cylinder.h"
#include <iostream>

int main()
{
	Cylinder s;
	s.setHeight(5);
	s.setRadius(5);
	std::cout << "The radius of the cylinder is: " << s.getRadius() << std::endl;
	std::cout << "The height of the cylinder is: " << s.getHeight() << std::endl;
	std::cout << "The volume of the cylinder is: " << s.calculateVolume() << std::endl;
	std::cout << "The suface area of the cylinder is: " << s.calculateSurfaceArea() << std::endl;

	return 0;
}
