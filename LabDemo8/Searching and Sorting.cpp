#include <iostream>
using namespace std;

// Function portotype
int searchList(const int[], int, int);

const int SIZE = 5;

int main()
{
	int tests[SIZE] = { 87, 75, 98, 100, 82 };
	int results;	// Hold the search result

	results = searchList(tests, SIZE, 100);

	// If my searchList returns -1, 100 was not found

	if (results == -1)
	{
		cout << "You did not earn 100 points on any tests.\n";
	}
	else
	{
		// Congratulate the user
		cout << "You earned 100 points on test " << (results + 1) << ".\n";
	}

	return 0;
}

int searchList(const int list[], int size, int value)
{
	int index = 0; // Used as a subscript to search the array
	int position = -1; // Used to record the position of the search value (if found).
	bool found = false; // Flag to indicate if the value was found

	while (!found && index < size)
	{
		if (list[index] == value)
		{
			// We found it
			found = true;
			position = index;
			return position;
		}
		// We didn't find it, Increase the index (sort of)
		index++;
	}
	return position;
}