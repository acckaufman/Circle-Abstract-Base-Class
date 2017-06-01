#pragma once
#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
	long int width;
	long int length;
public:
	//###########################################################################
	//Default constructor.  Accepts no parameters.								#
	//###########################################################################
	Rectangle();

	//###########################################################################
	//Second constructor that accepts parameters for each measurement and		#
	//calculates the area of the shape.											#
	//###########################################################################
	Rectangle(long int, long int);
	
	//###########################################################################
	//Overridden calcArea function.												#
	//###########################################################################
	virtual double calcArea() const;

	//###########################################################################
	//Accessor functions for each of the rectangle's attributes.				#
	//###########################################################################
	long int getWidth() const;
	long int getLength() const;

	//###########################################################################
	//Destructor.																#
	//###########################################################################
	~Rectangle();
};

