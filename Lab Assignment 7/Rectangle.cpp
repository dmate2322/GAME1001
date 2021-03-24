#include <iostream>
#include "Rectangle.h"

using namespace std;


Rectangle::Rectangle()
{
	
	
	length = 1.0;
	width = 1.0;
	
}

Rectangle::Rectangle(double l, double w)
{

	length = l;
	width = w;

}


bool Rectangle::setLength(double len)
{
	bool validData = true;

	if (len >= 0)
	{
		length = len;
	}
	else
	{
		validData = false;
	}

	return validData;
}

bool Rectangle::setWidth(double wid)
{
	bool validData = true;

	if (wid >= 0.0)
	{
		width = wid;
	}
	else
	{
		validData = false;
	}

	return validData;
}
