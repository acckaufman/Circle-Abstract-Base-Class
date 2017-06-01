#include "Circle.h"

//###########################################################################
//Default constructor.  Accepts no parameters.								#
//###########################################################################
Circle::Circle()
{
	centerX = 0;
	centerY = 0;
	radius = 0;
}

//###########################################################################
//Second constructor that accepts parameters for each measurement and		#
//calculates the area of the shape.											#
//###########################################################################
Circle::Circle(long int x, long int y, double r)
{
	centerX = x;
	centerY = y;
	radius = r;
	area = calcArea();
}

//###########################################################################
//Overridden calcArea function.												#
//###########################################################################
double Circle::calcArea() const
{
	//Create a double temp value to return
	double temp;

	//Calculate the circle's area and store it in temp
	temp = 3.14159 * radius * radius;

	//Send the double value back to the function calling to calculate area
	return temp;
}

//###########################################################################
//Accessor functions for each of the circle's attributes.					#
//###########################################################################
long int Circle::getCenterX() const
{
	return centerX;
}

long int Circle::getCenterY() const
{
	return centerY;
}

double Circle::getRadius() const
{
	return radius;
}

//###########################################################################
//Destructor.																#
//###########################################################################
Circle::~Circle()
{
}
