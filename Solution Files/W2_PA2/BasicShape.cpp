#include "BasicShape.h"

//###########################################################################
//Default constructor.  Accepts no parameters.								#
//###########################################################################
BasicShape::BasicShape()
{
	area = 0;
}

//###########################################################################
//Accessor function to return the protected area variable.					#
//###########################################################################
double BasicShape::getArea() const
{
	return area;
}

//###########################################################################
//Virtual destructor.														#
//###########################################################################
BasicShape::~BasicShape()
{
}
