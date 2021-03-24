#include <iostream>
#include <iomanip>
using namespace std;



//// Demonstrate object compostion
//class Carpet
//{
//private:
//	double pricePerSqYd;
//	Rectangle size; // <-- compostion 
//public:
//	void setPricePerYd(double p) { pricePerSqYd = p; }
//	void setDimensions(double len, double wid)
//	{
//		// Convert from feet to yards
//		size.setLength(len / 3);
//		size.setWidth(wid / 3);
//
//	}
//	double getTotalPrice()
//	{
//		return (size.getArea() * pricePerSqYd);
//	}
//
//};

int main()
{
	Carpet purchase;
	double pricePerYd, length, width;

	cout << "Room length in feet: ";
	cin >> length;
	cout << "Room width in feet: ";
	cin >> width;
	cout << "Carpet price per sq. yard: ";
	cin >> pricePerYd;

	purchase.setDimensions(length, width);
	purchase.setPricePerYd(pricePerYd);

	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe total price of my new " << length << " x " << width << " carpet is $" << purchase.getTotalPrice() << endl;

	return 0;
}

