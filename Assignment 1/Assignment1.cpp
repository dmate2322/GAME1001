#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
	cout << "==================\n";
	cout << "      Welcome!" << endl;
	cout << "==================\n\n";

	bool playAgain = true, tie = false;
	int playerWins = 0;
	int computerWins = 0;
	int playerChoice;
	int rock = 1, paper = 2, scissors = 3;
	int computer;
	char restart;


	ofstream outputFile;
	ifstream inputFile;
	string userName;



	cout << "Please enter your username: ";
	cin >> userName;

	userName += ".txt";

	inputFile.open(userName.c_str());
	
	inputFile >> playerWins;
	inputFile >> computerWins;

	cout << "\n\n       Leaderboards " << endl;
	cout << "\nCurrent Wins: " << playerWins << " for the player" << endl;
	cout << "              " << computerWins << " for the computer";
	

	inputFile.close();
		

	
	while (playAgain == true)
	{

		cout << "\n\nPlease choose the number value one of the following options: ";
		cout << "Rock = 1, Paper = 2, Scissors = 3." << endl;
		cout << "The number you picked is: ";
		cin >> playerChoice;

		// Player Selection
		if (playerChoice == rock)
		{
			cout << "\nYou have selected rock!" << endl;
		}
		else if (playerChoice == paper)
		{
			cout << "\nYou have selected paper!" << endl;
		}
		else if (playerChoice == scissors)
		{
			cout << "\nYou have selected scissors!" << endl;
		}
		else
		{
			cout << "Invalid choice please try again!" << endl;
			cout << "Rock = 1, Paper = 2, Scissors = 3. ";
			cin >> playerChoice;
		}

		// Getting the computer to choose a random number between 1-3
		srand((unsigned)time(NULL));
		computer = rand() % 3 + 1;

		// Computer Selection
		if (computer == 1)
		{
			cout << "The computer selected rock." << endl;
		}
		else if (computer == 2)
		{
			cout << "The computer selected paper." << endl;
		}
		else if (computer == 3)
		{
			cout << "The computer selected scissors." << endl;
		}

		// Win Conditions 
		if (playerChoice == computer)
		{
			cout << "\nIts a Draw" << endl;
		}
		else if ((playerChoice == 1 && computer == 3) || (playerChoice = 2 && computer == 1) || (playerChoice == 3 && computer == 2))
		{
			cout << "\nYou Win!" << endl;
			playerWins ++;
		}
		else
		{
			cout << "\nComputer Wins!" << endl;
			computerWins ++;
		}

		cout << "Would you like to play again? (Y)Yes, (N)No " << endl;
		cin >> restart;
		restart = toupper(restart);

		if (restart == 'N')
		{
			playAgain = false;
			cout << "\nGame is saved" << endl << endl;
			cout << "\nThanks for playing!";
		}
		else if (restart == 'Y')
		{
			playAgain = true;
			
		}
		else
		{
			cout << "Error! Please enter either y or n" << endl;	
			cout << "Would you like to play again? (Y)Yes, (N)No " << endl << endl;
			cin >> restart;
			restart = toupper(restart);

		}
	}
	outputFile.open(userName.c_str());

	outputFile << playerWins << endl;
	outputFile << computerWins << endl;

	outputFile.close();





	return 0;


}