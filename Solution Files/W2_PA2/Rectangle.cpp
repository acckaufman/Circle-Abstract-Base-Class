#include "Rectangle.h"

//###########################################################################
//Default constructor.  Accepts no parameters.								#
//###########################################################################
Rectangle::Rectangle()
{
	width = 0;
	length = 0;
}

//###########################################################################
//Second constructor that accepts parameters for each measurement and		#
//calculates the area of the shape.											#
//###########################################################################
Rectangle::Rectangle(long int w, long int len)
{
	width = w;
	length = len;
	area = calcArea();
}

//###########################################################################
//Overridden calcArea function.												#
//###########################################################################
double Rectangle::calcArea() const
{
	//Define a temporary variable to hold the area
	double temp;

	//Calculate the area
	temp = length * width;

	//Return the calculated area to the function calling for it
	return temp;
}

//###########################################################################
//Accessor functions for each of the rectangle's attributes.				#
//###########################################################################
long int Rectangle::getWidth() const
{
	return width;
}

long int Rectangle::getLength() const
{
	return length;
}

//###########################################################################
//Destructor.																#
//###########################################################################
Rectangle::~Rectangle()
{
}
