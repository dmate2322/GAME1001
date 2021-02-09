#include<iostream>
#include <iomanip>
#include <fstream> // for file stream
#include <string>
using namespace std;

int main()
{
	int number = 1;

	while (number <= 5)
	{
		cout << "Hello ";
		number = number + 1;
	}

	cout << "\nThat's all!\n\n";





	//Example 2

		// Create named constants to hold minimum scores for each letter grade
	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 70,
		MIN_D_SCORE = 60,
		MIN_POSSIBLE_SCORE = 0;

	int numStudents,         // The total number of students 
		student,             // The current student being processed
		testScore;           // Current student's numeric test score
	char grade;              // Current student's letter grade
	bool goodScore = true;

	// Get the number of students 
	cout << "How many students do you have grades for? ";
	cin >> numStudents;

	// Initialize the loop control variable
	student = 1;

	// Loop once for each student
	while (student <= numStudents)
	{
		// Get this student's numeric score
		cout << "\nEnter the numeric test score for student #"
			<< student << ": ",
			cin >> testScore;

		// Determine the letter grade
		if (testScore >= MIN_A_SCORE)
			grade = 'A';
		else if (testScore >= MIN_B_SCORE)
			grade = 'B';
		else if (testScore >= MIN_C_SCORE)
			grade = 'C';
		else if (testScore >= MIN_D_SCORE)
			grade = 'D';
		else if (testScore >= MIN_POSSIBLE_SCORE)
			grade = 'F';
		else
			goodScore = false;  // The score was below 0

		// Display the letter grade
		if (goodScore)
			cout << "The letter grade is " << grade << ".\n";
		else
			cout << "The score cannot be below zero. \n";

		// Set student to the next student
		student = student + 1;
	}






	//Example 3

	int num = 4;

	// show postfix and prefix ++ operator
	cout << num << "  "; // Display 4
	cout << num++ << "   "; // Postfix mode. Displays 4 then increment by 1
	cout << num << "   "; // Display 5
	cout << ++num << "\n\n"; // Increments by 1 then displays 6

	cout << num << "  "; // Display 4
	cout << num-- << "   "; // Postfix mode. Displays 4 then decrement by 1
	cout << num << "   "; // Display 3
	cout << --num << "\n\n"; // Decrements by 1 then displays 2





//Example 4 Do While Loop
// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100;

	int choice;		// Menu choice
	int months;		// Number of months for membership
	double charges; // Monthly charges

	do {

		// Display the menu and get the users choice
		cout << "   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n";

		cout << "Enter your choice: ";
		cin >> choice;

		// Validate my menu selection
		while ((choice < 1) || (choice < 4))
		{
			// Invalid input detected
			cout << "Please enter 1, 2, 3, or 4: ";
			cin >> choice;
		}

		// Valid input territory



		// Validate the choice
		if (choice != 4)
		{
			// Valid choice
			cout << "For how many months? ";
			cin >> months;

			// set charges based on user input
			switch (choice)
			{
				// There is something wrong with the code below
			case 1:
				charges = months * ADULT_RATE;
				break;
			case 2:
				charges = months * CHILD_RATE;
				break;
			case 3:
				charges = months * SENIOR_RATE;
				break;

			}
			// Format the output
			cout << fixed << showpoint << setprecision(2); // Show currency
			cout << "The total charges are $" << charges << endl << endl << endl;

		}
	} while (choice != 4);






	// Example 5 For Loops
	int numDays;
	double dailySales,
		totalSales = 0.0,
		averageSales;

	// Get the number of days
	cout << "For how many days do you have sales figures? ";
	cin >> numDays;

	for (int day = 1; day <= numDays; day++) // Initalization ; Condition ; Update
	{
		cout << "Enter the sales for day " << day << ": ";
		cin >> dailySales;
		totalSales += dailySales; // Accumulate the running total
	}

	// Calculate the average daily sales
	averageSales = totalSales / numDays;

	// Display the total sales and average daily sales
	cout << fixed << showpoint << setprecision(2);
	cout << "\nTotal Sales:        $" << setw(8) << totalSales;
	cout << "\nAverage Daily Sales $" << setw(8) << averageSales << endl << endl;














	//Example 5 File.io "Writing out to a File"

	ofstream outputFile;

	// Open the output file
	outputFile.open("demofile.txt");

	cout << "Now writing data to the file.\n\n";

	// Write to the file
	outputFile << "Drake\n";
	outputFile << "Mateo\n";
	outputFile << "Likes\n";
	outputFile << "League of Legends\n";

	outputFile.close();

	cout << "Done.\n\n";





	//Example 6 Inputing User Data

	ofstream outputFile;
	string name1, name2, name3;

	// Open the output file
	outputFile.open("Friends.txt");

	cout << "Enter the name of three friends.\n";
	cout << "Friend #1: ";
	cin >> name1;
	cout << "Friend #2: ";
	cin >> name2;
	cout << "Friend #3: ";
	cin >> name3;

	outputFile << name1 << endl;
	outputFile << name2 << endl;
	outputFile << name3 << endl;


	outputFile.close();

	cout << "Done.\n\n";










	//Example 7 Reading in a File

	ifstream inputFIle;
	string name;

	inputFIle.open("Friends.txt");

	cout << "Reading data from the file.\n";

	inputFIle >> name;
	cout << name << endl;

	inputFIle >> name;
	cout << name << endl;

	inputFIle >> name;
	cout << name << endl;

	inputFIle.close();
















	//Example 8

	ofstream outputFile;
	int numDays;
	double sales;

	cout << "For how many days do you have sales? ";
	cin >> numDays;

	outputFile.open("Sales.txt");

	// Loop for each day of sales
	for (int count = 1; count <= numDays; count++)
	{
		// Get the sales amount for the day
		cout << "Enter the sales amount for  day " << count << ": ";
		cin >> sales;

		// Write the sales amount to the file 
		outputFile << sales << endl;
	}

	outputFile.close();

	cout << "Data written to Sales.txt\n";






	//Example 9

	ifstream inputFile; // File stream object
	int numDays = 0;	// Counts the records in the file
	double sales,		// Sales amount for the day
		totalSales = 0.0; // Accumulator
	string filename;

	cout << "Enter the filename: "; // to let user enter the filename
	cin >> filename;

	filename += ".txt";

	inputFIle.open(filename.c_str());

	if (inputFIle)// Checking if file exists
	{
		// Reached the End of File
		while (inputFIle >> sales)
		{
			// Process our info from the file
			totalSales += sales;
			numDays++;
		}

		inputFIle.close();

		cout << "Total sales for the " >> numDays << " days were $" << totalSales;
	}
	else
	{
		cout << "Error opening the file.\n\n";
	}




	// This program demonstrates Windows functions to print colored 
// text. It displays " Hello World!" in 16 different colors.
#include <iostream>      
#include <windows.h>    // Needed to display colors and call Sleep
	using namespace std;

	int main()
	{
		// Create a handle to the computer screen.
		HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

		// Write 16 lines in 16 different colors.
		for (int color = 0; color < 16; color++)
		{
			SetConsoleTextAttribute(screen, color);
			cout << " Hello World!" << endl;
			Sleep(400);   // Pause between lines to watch them appear
		}
		// Restore the normal text color)
		SetConsoleTextAttribute(screen, 7);
		return 0;
	}


	// This program writes the ABCs in green, red, and yellow.
#include <iostream>       
#include <windows.h>    // Needed to display colors and call Sleep
	using namespace std;

	int main()
	{
		// Bright Green = 10   Bright Red = 12   Bright Yellow = 14   

		// Get the handle to standard output device (the console)
		HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

		// Write the ABCs using 3 colors
		int color = 10;     // Staring color = green
		for (char letter = 'A'; letter <= 'Z'; letter++)
		{
			SetConsoleTextAttribute(screen, color); // Set the color
			cout << letter << endl;                 // Print the letter

			color += 2;                               // Choose next color
			if (color > 14)
				color = 10;

			Sleep(280);  // Pause between characters to watch them appear
		}
		// Restore normal text attribute (i.e. white)
		SetConsoleTextAttribute(screen, 7);
		return 0;
	}









	return 0;
}