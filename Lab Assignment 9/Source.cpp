#include <iostream>
using namespace std;

void sortArray(double*, int);
void arrayAverage(double*, int);

int main()
{
	double *testScores;
	int numTests;

	cout << "Please tell me how many test scores you will be entering: ";
	cin >> numTests;

	testScores = new double[numTests];

	cout << "Enter the test scores below.\n";
	for (int count = 0; count < numTests; count++)
	{
		cout << "Test " << (count + 1) << ": ";
		cin >> testScores[count];
	}


	sortArray(testScores, numTests);

	arrayAverage(testScores, numTests);


	delete[] testScores;
	testScores = nullptr;

	return 0;
}

void sortArray(double* array, int size) // to sort the array
{
	int temp;
	bool swap;

	do
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
	cout << "Your sorted test scores are: ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << ",";
	}
	cout << endl;
}

void arrayAverage(double* test, int num) // to calculate the average
{
	int total = 0;

	for (int count = 0; count < num; count++)
	{
		total += test[count];
	}
	

	cout << "Average is: " << (total / num) << endl;

}
