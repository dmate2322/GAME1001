#include <iostream>

using namespace std;

int main()
{

	const double overtime = 1.5;
	int regularPay;
	double hoursWorked, hourlyRate, totalPay;

	cout << "Please enter how many hours you have worked this week: " << endl;
	cin >> hoursWorked;
	cout << "Please enter your hourly rate of pay: " << endl;
	cin >> hourlyRate;

	regularPay = hourlyRate * hoursWorked;

	int overtimeHours;
	int overtimeCalculationOne;
	int overtimeCalculationTwo;
	int overtimeCalculationThree;

	if (hoursWorked <= 40)
	{
		cout << "Regular Pay: " << regularPay << endl;
		cout << "Overtime Pay: 0" << endl;
		cout << "Total Pay: " << regularPay << endl;
	}

	else if (hoursWorked > 40)
	{
		overtimeHours = hoursWorked - 40;
		overtimeCalculationOne = hourlyRate * 40;
		overtimeCalculationTwo = (overtimeHours * hourlyRate * overtime);
		overtimeCalculationThree = overtimeCalculationOne + overtimeCalculationTwo;
		cout << "Regular Pay: " << overtimeCalculationOne << endl;
		cout << "Overtime Pay: " << overtimeCalculationTwo << endl;
		cout << "Total Pay: " << overtimeCalculationThree << endl;
	}

	return 0;
}