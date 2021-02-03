#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double commissionPer = 0.09;
	float item1 = 299.99,
		item2 = 89.75,
		item3 = 189.95,
		item4 = 150.89,
		item5 = 429.45;
	int regularPay = 200;
	double item1Sales, item2Sales, item3Sales, item4Sales, item5Sales;
	double totalSales, commissionPay;

	cout << "You make $200 each week plus commission of 9% on items sold.\n"
		"Let's figure out what items you sold this week\n\n";

	cout << " ==========================================================================\n";
	cout << "1. Item 1 ($299.99)" << endl;
	cout << "2. Item 2 ($89.75)" << endl;
	cout << "3. Item 3 ($189.95)" << endl;
	cout << "4. Item 4 ($150.89)" << endl;
	cout << "5. Item 5 ($429.45)" << endl;
	cout << " ==========================================================================\n\n";



	cout << "How many units of item 1 (299.99) did you sell? ";
	cin >> item1Sales;
	while (item1Sales < 0)
	{
		cout << "Please enter a positive number. Try Again! ";
		cin >> item1Sales;
	}

	cout << "How many units of item 2 (89.75) did you sell? ";
	cin >> item2Sales;
	while (item2Sales < 0)
	{
		cout << "Please enter a positive number. Try Again! ";
		cin >> item2Sales;
	}

	cout << "How many units of item 3 (189.95) did you sell? ";
	cin >> item3Sales;
	while (item3Sales < 0)
	{
		cout << "Please enter a positive number. Try Again! ";
		cin >> item3Sales;
	}

	cout << "How many units of item 4 (150.89) did you sell? ";
	cin >> item4Sales;
	while (item4Sales < 0)
	{
		cout << "Please enter a positive number. Try Again! ";
		cin >> item4Sales;
	}

	cout << "How many units of item 5 (429.45) did you sell? ";
	cin >> item5Sales;
	while (item5Sales < 0)
	{
		cout << "Please enter a positive number. Try Again! ";
		cin >> item5Sales;
	}

	totalSales = (item1 * item1Sales) + (item2 * item2Sales) + (item3 * item3Sales) + (item4 * item4Sales) + (item5 * item5Sales);

	commissionPay = totalSales * commissionPer;
	cout << fixed << showpoint << setprecision(2); // Show currency

	cout << "\n==========================================================================\n";
	cout << "Your total pay for the week is: $" << (regularPay + commissionPay) << endl;
	cout << " ==========================================================================\n";


	return 0;
}