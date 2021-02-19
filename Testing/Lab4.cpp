#include<iostream>
#include <iomanip>
#include <fstream> // for file stream
#include <string>
using namespace std;

int main()
{

	fstream inputFile; // File stream object
	int numDays = 0;	// Counts the records in the file
	double sales,		// Sales amount for the day
		totalSales = 0.0; // Accumulator
	string filename;

	cout << "Enter the filename: "; // to let user enter the filename
	cin >> filename;

	filename += ".txt";

	inputFile.open(filename);

	if (inputFile)// Checking if file exists
	{
		// Reached the End of File
		while (inputFile >> sales)
		{
			// Process our info from the file
			totalSales += sales;
			numDays++;
		}

		inputFile.close();

		cout << "Total sales for the " << numDays << " days were $" << totalSales;
	}
	else
	{
		cout << "Error opening the file.\n\n";
	}
	return 0;
}