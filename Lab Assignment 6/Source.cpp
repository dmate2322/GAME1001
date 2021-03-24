#include <iostream>	
#include <iomanip>

using namespace std;

void celsius(double);

int main()
{
	int value, value2, value3, value4, value5;
	int size = 101;
	int choice;

	cout << "Welcome to the Fahrenheit to Celsius Converter!\n";
	cout << "Please enter a temperature: ";
	cin >> value >> value2 >> value3 >> value4 >> value5;
	

	celsius(value);
	celsius(value2);
	celsius(value3);
	celsius(value4);
	celsius(value5);
		
	

	return 0;
}

void celsius(double number)
{
	cout << fixed << showpoint << setprecision(1);
	double temp = 0;
	temp = (number - 32) * 5 / 9;
	cout << number << " Fahrenheit is " << temp << " in Celsius" << endl;
}