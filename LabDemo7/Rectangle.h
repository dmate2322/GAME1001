#pragma once

class Rectangle
{
private:
	double length;
	double width;
public:
	// Regular Functions
	bool setLength(double);
	bool setWidth(double);

	//Inline Functions
	double getLength() { return length; }
	double getWidth() { return width; }
	double getArea() { return length * width; }
};