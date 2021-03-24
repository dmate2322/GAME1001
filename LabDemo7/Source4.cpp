#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

class InventoryItem
{
private:
	int partNum;			// Part number
	string description;		// Item description
	int onHand;				// Units on hand
	double price;			// Unit price
public:
	void storeInfo(int p, string d, int oH, double cost);	// Prototype

	int getPartNum() { return partNum; }
	string getDescription() { return description; }
	int getOnHand() { return onHand; }
	double getPrice() { return price; }

};

void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
	partNum = p;
	description = d;
	onHand = oH;
	price = cost;
}

// Function prototypes for the client program
void storeValues(InventoryItem&);	// Receive an object by reference
void showValues(InventoryItem);		// Receive an object by value

int main()
{
	InventoryItem part;

	storeValues(part);
	showValues(part);
	return 0;
}

void storeValues(InventoryItem& item)
{
	// Local variables
	int partNum;
	string description;
	int qty;
	double price;

	cout << "Enter data for the new part \n";
	cout << "Part number: ";
	cin >> partNum;
	cout << "Description: ";
	cin.get();	// Move past the '/n' left in the input buffer by the last input
	getline(cin, description);
	cout << "Quantity on hand: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> price;

	item.storeInfo(partNum, description, qty, price);
}

void showValues(InventoryItem item)
{
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Part Number   : " << item.getPartNum() << endl;
	cout << "Description   : " << item.getDescription() << endl;
	cout << "Units on Hand : " << item.getOnHand() << endl;
	cout << "Price         : $" << item.getPrice() << endl;



}