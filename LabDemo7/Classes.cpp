#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
	double radius;
public:
	Circle() {radius = 1.0;}	


	void setRadius(double);
	double getRadius() // Inline Function
	{
		return radius;
	}
	double getArea();

};
/*
	This function sets the radius of the Circle object,
	it checks that the value passed in is greater then 0.0.
	Otherwise it uses the default value of 1.0.
*/
void Circle::setRadius(double r)
{
	if (r >= 0.0)
	{
		radius = r;
	}
	
}



/* Define getArea

	This function calculates and returns the Circle object's area.
	It does not need any parameters because it already has access to the
	member variable radius.
*/

double Circle::getArea()
{
	return 3.14 * pow(radius, 2);
}

int main()
{
	// Define 2 circle objects
	Circle circle1, circle2;

	circle1.setRadius(10.5);
	circle2.setRadius(2.5);

	cout << "The area of circle1 is " << circle1.getArea() << endl;
	cout << "The area of circle1 is " << circle2.getArea() << endl;




}

