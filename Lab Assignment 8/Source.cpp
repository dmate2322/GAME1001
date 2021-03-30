#include "Character.h"
#include <numbers>
using namespace std;

void vectorSort(vector<int>&);
void displayVector(vector<int>&);

int main()
{
	const int SIZE = 10;
	vector<int> values(SIZE);
	string userName;
	unsigned seed = time(0);
	srand(seed);
	int randValue = 0;
	Character player;

	for (int index = 0; index < SIZE; index++)
	{
		values[index] = rand() % 101;
	}

	cout << "Welcome to my character generator!\n";
	cout << "Please enter the name of your character: ";
	getline(cin, userName);
	player.setName(userName);

	// Setting HP
	player.setHp(150);

	// Random attack stats
	vectorSort(values);
	cout << endl;
	displayVector(values);

	randValue = 0 + rand() % 11;
	player.setAttack(values[randValue]);

	cout << "\n         " << "********************" << endl;
	cout << "         " << "Character Name: " << player.getName();
	cout << "\n         " << "HP: " << player.getHp();
	cout << "\n         " << "Attack: " << player.getAttack(); 
	cout << "\n         " << "********************" << endl;



	return 0;
}

void vectorSort(vector<int>& numbers)
{
	int  temp;
	bool swap;

	do
	{
		swap = false;
		for (unsigned count = 0; count < numbers.size() - 1; count++)
		{
			if (numbers[count] > numbers[count + 1])
			{
				temp = numbers[count];
				numbers[count] = numbers[count + 1];
				numbers[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}

void displayVector(vector<int>& numbers)
{
	for (unsigned count = 0; count < numbers.size(); count++)
	{
		cout << numbers[count] << " ";
	}
	cout << endl;
}