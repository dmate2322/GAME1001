#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{// Example 1
	int score1, score2, score3;
	double average;

	// Get the three test scores
	cout << "Enter 3 test scores and I will average them: ";
	cin >> score1 >> score2 >> score3;

	// Calculate and display average score
	average = (score1 + score2 + score3) / 3.0;
	cout << fixed << showpoint << setprecision(1);
	cout << "Your average is: " << average << endl;

	// If the average equals 100, congratulate the user
	if (average == 100)
	{
		cout << "Congratulation! ";
		cout << "Perfect Score!\n\n";
	}





	// Example 2
	int number;

	cout << "Enter an integer and I will tell you if it is odd or even: "
		cin >> number; 

	if (number % 2 == 0) // even or odd
	{
		cout << number << " is even.\n";
	}
	else
	{
		cout << number << " is odd.\n";
	}




	// Example 3 Floating Point Numbers (use cmath)
	double result = 0.666667 * 6.0;

	// 2/3 of 6 should be 4 and, if you print the result, 4 is displayed 

	cout << "result = " << result << endl;

	// However, internally result is Not precisely equal to 4.
	// abs() - Absolute
	if (abs(result - 4.0 < 0.0001)) // Close enough
	{
		cout << "resut DOES equal 4!" << endl;
	}
	else
	{
		cout << "result DOES NOT equal 4!" << endl;
	}


	// Example 4

	// Create named constants to hold minimum scored required for each letter grade
	const int
		MIN_A_SCORE = 80,
		MIN_B_SCORE = 70,
		MIN_C_SCORE = 60,
		MIN_D_SCORE = 50;

	int testScore; // Holds a numeric test score
	char grade;    // Holds a letter grade
	bool goodScore = true;

	cout << "Enter your numeric test score and I will tell you the letter grade: ";
	cin >> testScore;

	//Determine the letter grade
	if (testScore >= MIN_A_SCORE)
	{
		grade = 'A';
	}
	else if (testScore >= MIN_B_SCORE)
	{
		grade = 'B';
	}
	else if (testScore >= MIN_C_SCORE)
	{
		grade = 'C';
	}
	else if (testScore >= MIN_D_SCORE)
	{
		grade = 'D';
	}
	else if (testScore >= 0)
	{
		grade = 'F';
	}
	else
	{
		goodScore = false;  // Bad score entered
	}

	if (goodScore == true) // true or 1 or just put goodScore
	{
		cout << "Your grade is " << grade << endl
	}
	else
	{
		cout << "The score input is invalid" << endl;
	}

	cout << "Your grade is " << grade << endl;

	




	// Example 5 Nested if statements and opperators

	const int
		A_SCORE = 80,
		B_SCORE = 70,
		C_SCORE = 60,
		D_SCORE = 50,
		MIN_SCORE = 0,
		MAX_SCORE = 100;

	int testScore; // Holds a numeric test score
	

	cout << "Enter your numeric test score and I will tell you the letter grade: ";
	cin >> testScore;

	// Check if the input is valid
	if (testScore >= MIN_SCORE && testScore <= MAX_SCORE)
	{
		// The Score is valid
		if (testScore >= A_SCORE)
		{
			cout << "Your grade is A.\n";
		}
		else if (testScore >= B_SCORE)
		{
			cout << "Your grade is B.\n";
		}
		else if (testScore >= C_SCORE)
		{
			cout << "Your grade is C.\n";
		}
		else if (testScore >= D_SCORE)
		{
			cout << "Your grade is D.\n";
		}
		else
		{
			cout << "Your grade is F.\n";
		}
	}
	else
	{
		// The score is invalid
		cout << "\nThat is an invalid score. Run the program again and enter a value in the range of\n"
			<< MIN_SCORE << " through " << MAX_SCORE << ".\n";
	}









	//Example 6

	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100;

	int choice;		// Menu choice
	int months;		// Number of months for membership
	double charges; // Monthly charges

	// Display the menu and get the users choice
	cout << "   Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n";

	cout << "Enter your choice: ";
	cin >> choice;

	// Format the output
	cout << fixed << showpoint << setprecision(2); // Show currency


	// Execute choice
	if (choice == 1)
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * ADULT_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 2)
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * CHILD_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice == 3)
	{
		cout << "For how many months? ";
		cin >> months;
		charges = months * SENIOR_RATE;
		cout << "\nThe total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{
		// Incorrect input
		cout << "\n The valid choices are 1 through 4.\n"
			<< "Run the program again and select one of those.\n";
	}











	//Example 7
	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100;

	int choice;		// Menu choice
	int months;		// Number of months for membership
	double charges; // Monthly charges

	// Display the menu and get the users choice
	cout << "   Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n";

	cout << "Enter your choice: ";
	cin >> choice;


	// Validate the choice
	if (choice >= 1 && choice <= 3)
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
		cout << "The total charges are $" << charges << endl;

	}
	else if (choice != 4)
	{
		// Incorrect input
		cout << "\n The valid choices are 1 through 4.\n"
			<< "Run the program again and select one of those.\n";
	}


	return 0;
}
