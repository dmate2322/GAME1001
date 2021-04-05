#include <iostream>
using namespace std;

int getDays(int month, int year);

int main()
{
	int month = 0;
	int year;
	int day;

	cout << "Please enter a month ";
	cin >> month;
	if (month < 0)
	{
		cout << "I don't remember there being negative months! Restart the program and try better this time! " << endl;
		exit(3);
	}
	else if (month == 0)
	{
		cout << "The current month: April 2021, has 30 days.";
		exit(3);
	}
	else if (month > 12)
	{
		cout << "Excuse me sir and or miss I do not remember there being more than 12 months in a year. Restart the program and try better this time!" << endl;
		exit(3);
	}

	cout << "Please enter a year ";
	cin >> year;

	day = getDays(month, year);

	cout << "The number of days for that month is: " << day << endl;

	return 0;
}

int getDays(int month, int year)
{
	if (month == 2)
	{
		if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
		{
			return 29;
		}
		else
		{
			return 28;
		}

	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		return 31;
	}
	else
	{
		return 30;
	}
}

