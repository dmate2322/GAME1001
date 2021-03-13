#include <iostream>	
#include <iomanip>

using namespace std;

void celsius(double);

int main()
{
	int value;
	int size = 101;
	int choice;

	cout << "Welcome to the Fahrenheit to Celsius Converter!\n";
	cout << "Please enter a temperature: ";
	cin >> value;
	celsius(value);
	value = -20;
	cout << "\nPress 1 to see a table, Press 2 to Exit ";
	cin >> choice;
	if (choice == 1)
	{
		for (int i = -20; i < size; i++)
		{
			celsius(value);
			value++;
		}
		cout << "\nThank you have a good day!";
	}
	else if (choice == 2)
	{
		cout << "\nGoodbye!";

	}



	return 0;
}

void celsius(double number)
{
	cout << fixed << showpoint << setprecision(1);
	double temp = 0;
	temp = (number - 32) * 5 / 9;
	cout << number << " Fahrenheit is " << temp << " in Celsius" << endl;
}