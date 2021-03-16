#include <iostream>

using namespace std;

void DisplayAsterisk(int);

int main()
{
	int num1, num2, num3, num4, num5;


	cout << "Welcome to my LabTest 2\n\n";
	cout << "Please enter 5 number between 1 and 30, a bar graph will be displayed ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	cout << "Bar 1: ";
	DisplayAsterisk(num1);
	cout << "\nBar 2: ";
	DisplayAsterisk(num2);
	cout << "\nBar 3: ";
	DisplayAsterisk(num3);
	cout << "\nBar 4: ";
	DisplayAsterisk(num4);
	cout << "\nBar 5: ";
	DisplayAsterisk(num5);



	return 0;
}

void DisplayAsterisk(int number)
{
	if (number >= 1 && number <=30)
	{
		for (int i = 0; i < number; i++)
		{
			cout << "*";
		}
		cout << endl;

	}
	else
	{
		cout << "Invalid input please enter something between 1 and 30" << endl;
	}

}