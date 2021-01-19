#include<iostream>
using namespace std;

int main()
{
	double first = 5.65,
		second = 55.75,
		third = 23.125,
		fourth = -10.4;

	cout << "The size of char is: " << sizeof(char) << " bytes.\n";
	cout << "The size of bool is: " << sizeof(bool) << " bytes.\n";
	cout << "The size of short is:" << sizeof(short) << " bytes.\n";
	cout << "The size of int is: " << sizeof(int) << " bytes.\n";
	cout << "The size of long is: " << sizeof(long) << " bytes.\n";
	cout << "The size of float is: " << sizeof(float) << " bytes.\n";
	cout << "The size of double is: " << sizeof(double) << " bytes.\n";
	cout << "The size of long long is: " << sizeof(long long) << " bytes.\n";
	cout << "The size of string is: " << sizeof(string) << " bytes." << endl << endl;

	cout << "Addition: " << first + second << endl;
	cout << "Subtraction: " << second - third << endl;
	cout << "Multiplication: " << third * fourth << endl;
	cout << "Division: " << fourth / first << endl;
	cout << "Modulus: " << (int)first % (int)second << endl;

	return 0;


}