#pragma once
class BasicShape
{
protected:
	double area;
public:
	//###########################################################################
	//Default constructor.  Accepts no parameters.								#
	//###########################################################################
	BasicShape();
	
	//###########################################################################
	//Accessor function to return the protected area variable.					#
	//###########################################################################
	double getArea() const;

	//###########################################################################
	//Pure virtual function to calculate a derived shape's area.				#
	//Must be overridden in derived classes.									#
	//###########################################################################
	//Pure virtual function to calculate a shape's area
	//Must be overridden in derived classes
	virtual double calcArea() const = 0;

	//###########################################################################
	//Virtual destructor.														#
	//###########################################################################
	virtual ~BasicShape();
};

