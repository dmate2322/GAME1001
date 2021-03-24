#pragma once
class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle();

	Rectangle(double, double);

	bool setLength(double);
	bool setWidth(double);
	
	double GetPerimeter() {return (length * 2) + (width * 2);}
	double GetArea() { return (length * width); }


};

