#include <iostream>
#include <cstring>
using namespace std;

void passChecker(char* pass);


int main()
{	
	const int SIZE = 30;
	char password[SIZE];

	cout << "Password Generator";
	cout << "\nMust be 6 characters long";
	cout << "\nContain 1 uppercase and 1 lowercase letter and 1 number";
	cout << "\n\nPlease enter a password ";
	

	cin.getline(password, SIZE);

	passChecker(password);

	return 0;
}


void passChecker(char* pass)
{
	bool upper = false, lower = false, number = false;
	
	for (int i = 0; i < strlen(pass); i++)
	{
		if (isupper(pass[i]))
		{
			upper = true;
		}
		if (islower(pass[i]))
		{
			lower = true;
		}
		if (isdigit(pass[i]))
		{
			number = true;
		}
	}

	if (strlen(pass) < 6)
	{
		cout << "Please try again the password length should be at least 6 characters!" << endl;
	}
	if (upper == false)
	{
		cout << "The password doesn't contain at least one uppercase letter!" << endl;
	}
	if (lower == false)
	{
		cout << "The password doesn't contain at least one lowercase letter!" << endl;
	}	
	if (number == false)
	{
		cout << "The password doesn't contain at least one number!" << endl;
	}
	if (upper == true && lower == true && number == true)
	{
		cout << "Password is valid!";
	}
}