// Basic Calculations from user input
#include<iostream>
using namespace std;

int main()
{
	double number1, number2, number3,
		sum, product, average;

	cout << "Please enter three numbers of your choice: ";
	cin >> number1 >> number2 >> number3;
	
	sum = number1 + number2 + number3;
	product = number1 * number2 * number3;	
	average = sum / 3;

	cout << "The Sum of your three numbers are: " << sum << endl;	
	cout << "The Product of your three numbers are: " << product << endl;
	cout << "The Average of your three numbers are: " << average << endl;


	return 0;
}