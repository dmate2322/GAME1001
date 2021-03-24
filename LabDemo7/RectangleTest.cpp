#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle box;
	double boxLength, boxWidth;

	// Get the box length and width
	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length? ";
	cin >> boxLength;
	cout << "What is the width? ";
	cin >> boxWidth;

	if (!box.setLength(boxLength))
	{
		cout << "Invalid box length entered.\n";
	}
	else if (!box.setWidth(boxWidth))
	{
		cout << "Invalid box width entered.\n";
	}
	else
	{
		//Call member functions to get box information to display
		cout << "\nHere is the rectangle's data:\n";
		cout << "Length: " << box.getLength() << endl;
		cout << "Width: " << box.getWidth() << endl;
		cout << "Area: " << box.getArea() << endl;
	}



	return 0;

}