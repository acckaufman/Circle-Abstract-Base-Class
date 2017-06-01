//This program demonstrates pure abstract base classes, pure virtual functions, and overridden derived class functions.
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Prototype for display function
void displayArea(const BasicShape *);

int main()
{
	//Parameters for the circle object
	long int x, y;
	double r;

	//Parameters for the rectangle object
	long int w, len;

	//Temporary variable to ensure no input issues with the integers
	double temp;

	cout << "Welcome to this program, which will demonstrate pure abstract base" << endl
		<< "classes, pure virtual functions, and overridden derived class functions." << endl << endl;
	cout << "Let's create a circle.  Enter the following information:" << endl;
	cout << "centerX: ";
	cin >> temp;
	x = static_cast<int>(temp);		//In this section, the use of static casting discards any decimal portion
	cout << "centerY: ";			//that the user accidentally enters, since some of the measurements are
	cin >> temp;					//declared as long ints.
	y = static_cast<int>(temp);		//This prevents issues with the input as the computer reads the keyboard
	cout << "Radius: ";				//buffer after each input.
	cin >> r;

	cout << "Now we will create an instance of the Circle class using the information" << endl
		<< "you entered..." << endl;
	Circle circle1(x, y, r);
	cout << "Done." << endl << endl;

	system("pause");

	cout << endl << "Let's create a rectangle. Enter the following information:" << endl;
	cout << "Width: ";
	cin >> temp;
	w = static_cast<int>(temp);
	cout << "Length: ";
	cin >> temp;
	len = static_cast<int>(temp);

	cout << "Now we will create an instance of the Rectangle class using the information" << endl
		<< "you entered..." << endl;
	Rectangle rectangle1(w, len);
	cout << "Done." << endl << endl;

	system("pause");

	//Display the results for the user.
	cout << endl << "Now let's look at the results." << endl << endl;

	cout << "Circle" << endl << "-----------------" << endl;
	cout << "centerX: " << circle1.getCenterX() << endl;
	cout << "centerY: " << circle1.getCenterY() << endl;
	cout << "Radius: " << circle1.getRadius() << endl;
	displayArea(&circle1);		//Address of the circle object we created, same as using a pointer
	cout << endl << endl;

	cout << "Rectangle" << endl << "-----------------" << endl;
	cout << "Width: " << rectangle1.getWidth() << endl;
	cout << "Length: " << rectangle1.getLength() << endl;
	displayArea(&rectangle1);	//Addres of the rectangle object we created, same as using a pointer
	cout << endl << endl;

	system("pause");
	return 0;
}

//Display the area of the shape parameter using the base class getArea function
void displayArea(const BasicShape *shape)
{
	cout << "Area: " << fixed << showpoint << setprecision(2) << shape->getArea();
}