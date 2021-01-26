//Calculate the area of a rectangle
#include <iostream>	
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	int length, width, area;

	cout << "The program calculates the area of a rectangle.\n";

	// Ask input from the user
	cout << "What is the length and width of the rectangle seperated by a space? ";
	cin >> length >> width;

	area = length * width;
	cout << "The area of the rectangle is " << area << endl;


	// Example 2
	int books,
		months;
	double booksPerMonth;

	// Get input
	cout << "How many books do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;

	// Static cast is used to change the variable
	booksPerMonth = static_cast<double>(books) / months;
	cout << "That is " << booksPerMonth << " books per month.\n";

	//Example 3
	int number = 65;

	cout << number << endl;

	// What is the letter equiavelnt to the value?
	cout << static_cast<char>(number) << endl;


	// Overflowing
	short intVar = 32767;

	// Short: 0000 0000 0000 0000

	cout << "Original value of intVar  " << intVar << endl;

	intVar += 1;  // intVar = intVar + 1;
	cout << "intVar after overflow  " << intVar << endl;


	// include<cmath>
	// Defining constant values
	const double PI = 3.14159;
	double area, radius;

	cout << "This program calculates the area of a circle.\n";

	cout << "What is that radius of the circle? ";
	cin >> radius;

	//compute
	area = PI * pow(radius, 2);
	cout << "The area is " << area << endl;
	
	
	
	
	
	//include<iomanip>
	
	int num1 = 2897, num2 = 5, num3 = 837,
		num4 = 34, num5 = 7, num6 = 1623,
		num7 = 390, num8 = 3456, num9 = 12;

	// Display the first row of numbers
	cout << left << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
	cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;
	cout << setw(6) << num7 << setw(6) << num8 << setw(6) << num9 << endl;


	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;

	cout << quotient << endl;

	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;



	double x = 6.0;

	cout << x << endl;

	cout << showpoint << x << endl;
	cout << setprecision(2) << x << endl;
	cout << fixed << "$" << x << endl;

	
	// include<string>
	string name, city;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "Enter the city you live in: ";
	getline(cin, city);

	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;


	// Getting a character
	char ch;

	cout << "Type a character and press Enter: ";
	cin.get(ch);
	cout << "You entered: " << ch << endl;



	// Getting the user to write a sentence
	const int SIZE = 81;
	char sentence[SIZE];     // 81 memory cells

	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE);
	cout << "You entered: " << sentence << endl;



	// Generate numbers without seeding include <cstdlib>

	cout << rand() << "     ";
	cout << rand() << "     ";
	cout << rand() << endl;



	// Generate numbers with seeding (include <cstdlib> and <ctime>
	unsigned seed;

	seed = time(0);  // Gets current time in seconds since january 1, 1970
	srand(seed);

	cout << rand() << "     ";
	cout << rand() << "     ";
	cout << rand() << endl;
	return 0;