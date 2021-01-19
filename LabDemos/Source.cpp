// A simple C++ program
#include <iostream>
using namespace std;	// use the standard namespace

// Main entry point to the application
int main()
{
	double first = 5.75,
		second = 55.36,
		third = 20.150,
		fourth = -10.4;
	cout << "The size of a short integer: " << sizeof(short) << " bytes.\n";
	cout << "The size of a long integer: " << sizeof(long) << " bytes.\n";
	cout << "The size of double is: " << sizeof(double) << " bytes.\n";
	cout << "The size of a integer: " << sizeof(int) << " bytes.\n";
	cout << "The size of bool is: " << sizeof(bool) << " bytes.\n";
	cout << "THe size of a float is: " << sizeof(float) << " bytes.\n";
	cout << "The size of char is: " << sizeof(char) << " bytes.\n";
	cout << "The size of a long long integer: " << sizeof(long long) << " bytes.\n";
	cout << "The size of a string is: " << sizeof(string) << " bytes. " << endl << endl;

	cout << "Addition: " << first + second << endl;
	cout << "Subtraction: " << second - third << endl;
	cout << "MultiplicationL " << third * fourth << endl;
	cout << "Division: " << fourth / first << endl;
	cout << "Modulus: " << (int)first % (int)second << endl;

	cout << "Thanks for my ted talk";

	return 0;
}