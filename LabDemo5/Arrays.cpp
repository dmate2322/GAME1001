#include <iostream>
#include <fstream> 
#include <string>
#include <cctype> // toupper
#include <iomanip>
#include <vector> // to work with vectors
using namespace std;



int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];

	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";
	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	cin >> hours[3];
	cin >> hours[4];
	cin >> hours[5];

	cout << "The hours you entered are: ";
	cout << " " << hours[0];
	cout << " " << hours[1];
	cout << " " << hours[2];
	cout << " " << hours[3];
	cout << " " << hours[4];
	cout << " " << hours[5] << endl;








	//Example 2 Using Loops

	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int i; // Loop Counter

	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees: ";
	
	for(i = 0; i < NUM_EMPLOYEES; i++)
	{
		cin >> hours[i];
	}

	cout << "The hours you entered are: ";

	for (i = 0; i < NUM_EMPLOYEES; i++)
	{
		cout << " " << hours[i];
	}





	//Example 3 Reading in a file to an array

	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count = 0;

	ifstream datafile;

	datafile.open("work.dat");
	if (!datafile)
	{
		cout << "Error opening data file\n";
	}
	else
	{
		// Opened the file successfully
		while (count < NUM_EMPLOYEES && datafile >> hours[count])
		{
			count++;
		}

		datafile.close();

		cout << "The hours worked by each employee are:\n";
		for (int i = 0; i < count; i++)
		{
			cout << "Employee " << i + 1 << ": "; // Instead of printing out 0-5, it prints 1-6
			cout << hours[i] << endl;
		}
	}



	// Example 4

	const int SIZE = 7;
	int numbers[SIZE] = { 1, 2, 4, 8, 14, 65, 40 };

	cout << "Here is the content of the array:\n";

	for (int i = 0; i < SIZE, i++)
	{
		cout << numbers[1] << " ";
	}

	cout << endl << endl;




	// Example 5 Getting a person to enter a sentence and counting the vowels of that sentence

	char ch;
	int vowelCount = 0;
	string sentence;

	cout << "Enter any sentence you wish and I will tell you how many vowels are in it.\n\n";

	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++) // .length will return the number of characters are in the sentence
	{
		// convert every letter to an uppercase (or lowercase) and work on it
		ch = toupper(sentence[i]);

		switch (ch)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				vowelCount++;

		}
	}
	cout << "There are " << vowelCount << " vowels in the sentence.\n\n.";



	// Example 6 Working with Parallel Arrays 38 minutes

	const int NUM_EMPS = 5;
	int i;
	int hours[NUM_EMPS];
	double payRate[NUM_EMPS];
	double grossPay;

	// Get employee work data

	cout << "Enter the hours worked and hourly pay rates of " << NUM_EMPS << " employees. \n";

	for ( i = 0; i < NUM_EMPS; i++)
	{
		cout << "Hours worked by employee #" << (i + 1) << ": ";
		cin >> hours[i];
		cout << "Hourly pay rate for employee #" << (i + 1) << ": ";
		cin >> payRate[i];
	}

	//Display the data
	cout << "\nHere is the gross pay for each employee.\n";
	cout << fixed << showpoint << setprecision(2);

	for ( i = 0; i < NUM_EMPS; i++)
	{
		grossPay = hours[i] + payRate[i];
		cout << "Employee # " << (i + 1) << ": $" << setw(7) << grossPay << endl;
	}




	// Example 7 Using two-dimensional array. The
	// data stored in the array is read in from a file
	
	const int NUM_DIVS = 3;				// Number of divisions
	const int NUM_QTRS = 4;				// Number of quarters
	double sales[NUM_DIVS][NUM_QTRS];	// 2D array with 3 rows and 4 colums
	double totalSales = 0;				// Accumulates total sales
	int div, qtr;						// Loop counter
	ifstream datafile;					// Used to read data from a file

	datafile.open("sales2.dat");
	if (!datafile)
		cout << "Error opening data file.\n";
	else
	{
		cout << fixed << showpoint << setprecision(2);
		cout << "Quarterly Sales by Division\n\n";

		// Nested loops are used to fill the array with quarterly
		// sales figures for each division and to display data
		for ( div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				cout << "Divison " << (div + 1)
					<< ", Quarter " << (qtr + 1) << ": $";
				datafile >> sales[div][qtr];
				cout << sales[div][qtr] << endl;
		
			}
			cout << endl; // Print blank line
		}

	}



	// Example 8 Using the vector object

	vector<int> values; // declares a value, vectors are useful for flexibility

	values.push_back(20);
	values.push_back(300);
	values.push_back(12);


	cout << "The size of the values is " << values.size() << endl;

	for (int i = 0; i < values.size(); i++)
	{
		cout << " " << values[i];
	}

	cout << endl;

	
	cout << "Popping the value: " << values.front() << endl; // if you want to print out the value youre popping
															// vaule.back shows the last 
	values.pop_back();

	for (int i = 0; i < values.size(); i++)
	{
		cout << " " << values[i];
	}

	cout << endl;

	if (values.empty())
	{
		cout << "The vector is empty" << endl;
	}



	return 0;
}