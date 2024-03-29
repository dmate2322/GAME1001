// This program demonstrates the use of a structure.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee
{
private:
	int    empNumber;  // Employee number
	string name;       // Employee name
	double hours,      // Hours worked
		payRate;    // Hourly pay rate
public:
	Employee(int empN, string n, double h, double p)
	{
		empNumber = empN;
		name = n;
		hours = h;
		payRate = p;
	}

	Employee()
	{
		empNumber = 0;
		name = "No Name";
		hours = 0;
		payRate = 0;
	}
	void setEmpNumber(int number)
	{
		empNumber = number;
	}

	void setName(string n)
	{
		name = n;
	}

	void setPayRate(double rate)
	{
		payRate = rate;
	}

	void setHours(double h)
	{
		hours = h;
	}

	int getEmpNumber()
	{
		return empNumber;
	}

	string getName()
	{
		return name;
	}

	double getHours()
	{
		return hours;
	}

	double getPayRate()
	{
		return payRate;
	}

	double getWage()
	{
		return payRate * hours;
	}

	string getEmpData()
	{
		string data = "\nEmployee ID Number ===> " + to_string(empNumber);
		data += "\nEmployee Name ========> " + name;
		data += "\nHours Worked =========> " + to_string(hours);
		data += "\nPay Rate =============> " + to_string(payRate);
		data += "\nTotal Wage ===========> " + to_string(getWage());
		data += "\n";

		return data;
	}



};


Employee findHigh(Employee list[], int size);
Employee findLow(Employee list[], int size);
void sortEmployeesAZ(Employee list[], int size);
void sortEmployeesPay(Employee list[], int size);
double averageWage(Employee list[], int size);
void highWageAvg(Employee list[], int size, double avg);

int main()
{
	const int NUM_EMPLOYEES = 4;
	double average = 0;

	Employee list[NUM_EMPLOYEES];
	list[0] = Employee(1, "John", 40, 25);
	list[1] = Employee(2, "Mary", 30, 40);
	list[2] = Employee(3, "Grace", 35, 30);
	list[3] = Employee(4, "Mark", 45, 20);

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	cout << "\nEmployee with the highest wage is: " << findHigh(list, NUM_EMPLOYEES).getEmpData() << endl;
	cout << "\nEmployee with the lowest wage is: " << findLow(list, NUM_EMPLOYEES).getEmpData() << endl;

	cout << "\nSorted by Alphabetically Order!" << endl;
	sortEmployeesAZ(list, NUM_EMPLOYEES);

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	cout << "\nSorted by pay rate Highest to Lowest!" << endl;
	sortEmployeesPay(list, NUM_EMPLOYEES);

	for (int i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << list[i].getEmpData();
	}

	cout << "\nCalculating Average Earnings" << endl;
	average = averageWage(list, NUM_EMPLOYEES);
	cout << average << endl;

	cout << "\nEmployees whose earnings are higher than the average" << endl;
	highWageAvg(list, NUM_EMPLOYEES, average);

	system("pause");
	return 0;
}

Employee findHigh(Employee list[], int size)
{

	Employee high = list[0];
	for (int i = 0; i < size; i++)
		if (list[i].getWage() > high.getWage())
		{
			high = list[i];
		}
	return high;
}

Employee findLow(Employee list[], int size)
{

	Employee low = list[0];
	for (int i = 0; i < size; i++)
		if (list[i].getWage() < low.getWage())
		{
			low = list[i];
		}
	return low;
}

void sortEmployeesAZ(Employee list[], int size)
{
	Employee emp;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (list[i].getWage() > list[j].getWage())
			{
				emp = list[i];
				list[i] = list[j];
				list[j] = emp;
			}
}

void sortEmployeesPay(Employee list[], int size)
{
	Employee pay;
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (list[i].getPayRate() < list[j].getPayRate())
			{
				pay = list[i];
				list[i] = list[j];
				list[j] = pay;
			}
}

double averageWage(Employee list[], int size)
{
	double earnings = 0;
	double average = 0;
	for (int i = 0; i < size; i++)
	{
		earnings += list[i].getWage();
	}
	average = earnings / size;

	return average;
	
}

void highWageAvg(Employee list[], int size, double avg)
{
	double employees;
	for (int i = 0; i < size; i++)
	{
		employees = list[i].getWage();
		if (avg < employees)
		{
			cout << list[i].getName() << " earns greater than the average salary" << endl;
		}
	}

}