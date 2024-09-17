/*
	This is a spec file with basically the nouns and verbs of the object
*/


#ifndef Cylinder_H
#define Cylinder_H

class Cylinder   //Properties and attributes and or methods(such as radius)
	//For cylinder you will have radius and height and others needed for lab
	//
{
public:

	//Constructor and destructor
	Cylinder();
	~Cylinder();

	// Setters
	void setRadius(double r);
	void setHeight(double h);

	//getter
	double getRadius();
	double getHeight();
	double calculateVolume();
	double calculateSurfaceArea();

private:
	double radius;
	double height;
	double pi = 3.14159;
};

#endif // !Cylinder_H


