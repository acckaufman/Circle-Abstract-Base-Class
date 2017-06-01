#pragma once
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
	long int centerX;
	long int centerY;
	double radius;
public:
	//###########################################################################
	//Default constructor.  Accepts no parameters.								#
	//###########################################################################
	Circle();

	//###########################################################################
	//Second constructor that accepts parameters for each measurement and		#
	//calculates the area of the shape.											#
	//###########################################################################
	Circle(long int, long int, double);

	//###########################################################################
	//Overridden calcArea function.												#
	//###########################################################################
	virtual double calcArea() const;

	//###########################################################################
	//Accessor functions for each of the circle's attributes.					#
	//###########################################################################
	long int getCenterX() const;
	long int getCenterY() const;
	double getRadius() const;

	//###########################################################################
	//Destructor.																#
	//###########################################################################
	~Circle();
};

