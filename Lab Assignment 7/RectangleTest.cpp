#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	cout << "Welcome to my Rectangle Generator!" << endl;
	Rectangle r1;
	Rectangle r2;

	double rect1, rect2, rect2Len, rect2Wid;

	rect1 = r1.GetArea();
	cout << "\nThe default constructors Area is: " << rect1;
	rect1 = r1.GetPerimeter();
	cout << "\nThe default constructors Perimeter is: " << rect1 << endl << endl;


	cout << "\nPlease enter the Length of your Rectangle: ";
	cin >> rect2Len;
	cout << "Please enter the Width of your Rectangle: ";
	cin >> rect2Wid;

	r2.setLength(rect2Len);
	r2.setWidth(rect2Wid);

	rect2 = r2.GetArea();
	cout << "\nThe overloaded constructor Area is: " << rect2 << endl;
	rect2 = r2.GetPerimeter();
	cout << "The overloaded constructors Perimeter is: " << rect2;



	return 0;
}