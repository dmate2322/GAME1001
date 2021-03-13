#include <iostream>
using namespace std;

void displayMessage()
{
	cout << "Hello from function displayMessage.\n";

}


int main()
{
	int count;
	
	cout << "Hello from main.\n";
	cout << "How many messages do you want to see? ";
	cin >> count;
	// Call a function to display a message
	for ( int i = 0; i < count; i++)
	{
		displayMessage();

	}

	cout << "Back in function main again.\n";

	return 0;

}





//Example 2 Function Prototype
void first();
void second();

void first() // jumps here first
{
	cout << "Hello from function first.\n";
	second();
}

void second() // jumps to second
{
	cout << "Hello from the function second.\n";

}

int main()
{
	first(); 





}




// Example 3
void displayValue(int);



int main()
{
	displayValue(5); // 5 is copied and stored into nums


}

void displayValue(int num)
{
	cout << "The value is " << num << endl;

}



// Example 4
void showSum(int, int, int);



int main()
{
	int value1, value2, value3;

	cout << "Enter three interget values and I will display their sum: ";
	cin >> value1, value2, value3;

	showSum(value1, value2, value3);


}

void showSum(int num1, int num2, int num3) // every single perameter needs a data type "int"
{
	cout << "The sum is " << (num1 + num2 + num3) << endl;

}


// Example 5
void changeMe(int myValue);



int main()
{
	int number = 22;

	cout << "In main number is " << number << endl;

	changeMe(number);

	cout << "Back in main again, number is " << number << endl;

}

void changeMe(int myValue)
{
	myValue = 0;

	cout << "In changeMe, the value has been changed to " << myValue << endl;

}



// Example 6
int sum(int num1, int num2);



int main()
{
	int value1 = 20, value2 = 40, total = 0;

	total = sum(value1, value2);

	cout << "The sum of " << value1 << " and " << value2 << " is " << total << endl;

}

int sum(int num1, int num2)
{
	return num1 + num2;

}