#include "Rectangle.h"

bool Rectangle::setLength(double len)
{
	bool validData = true;

	if (len >= 0 )
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
