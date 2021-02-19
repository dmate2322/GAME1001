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
	float itemcostchart[5] = { 299.99, 89.75, 189.95, 150.89, 429.45 };
	float itemsaleschart[5];
	int saleschartlocation = 0;

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

	while (saleschartlocation <= 4)
	{
		cout << "How many units of item " << saleschartlocation + 1 << "($" << itemcostchart[saleschartlocation] << ") did you sell?";
		cin >> itemsaleschart[saleschartlocation];
		if (itemsaleschart[saleschartlocation] < 0)
		{
			cout << "Please enter a positive number. Try Again!\n ";
			
		}
		else if (itemsaleschart[saleschartlocation] >= 0)
		{
			saleschartlocation++;
		}

	}

	item1Sales = itemsaleschart[0];
	item2Sales = itemsaleschart[1];
	item3Sales = itemsaleschart[2];
	item4Sales = itemsaleschart[3];
	item5Sales = itemsaleschart[4];

	totalSales = (item1 * item1Sales) + (item2 * item2Sales) + (item3 * item3Sales) + (item4 * item4Sales) + (item5 * item5Sales);

	commissionPay = totalSales * commissionPer;
	cout << fixed << showpoint << setprecision(2); // Show currency

	cout << "\n==========================================================================\n";
	cout << "Your total pay for the week is: $" << (regularPay + commissionPay) << endl;
	cout << " ==========================================================================\n";


	return 0;
}