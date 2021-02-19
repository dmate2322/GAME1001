#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int NUM_EMPS = 10;
	int num[NUM_EMPS];
	int i, j = 0;
	double average = 0;
	vector<int> belowAVG;
	vector<int> aboveAVG;

	cout << "Please enter 10 random numbers " << NUM_EMPS << ": ";

	for ( i = 0; i < NUM_EMPS; i++)
	{
		cin >> num[i];
		average += num[i];
	}
	average = average / NUM_EMPS;

	cout << "Your average of the numbers are: " << average << endl << endl;

	for ( i = 0; i < NUM_EMPS ; i++)
	{
		if (num[i] <= average)
		{
			belowAVG.push_back(num[i]);
			cout << "Less than or equal to: " << belowAVG[j] << endl;
			j++;
			
		}
		
	}

	j = 0;

	for (i = 0; i < NUM_EMPS; i++)
	{
		if (num[i] > average)
		{
			aboveAVG.push_back(num[i]);
			cout << "Greater than: " << aboveAVG[j] << endl;
			j++;

			
			
		}

	}





	return 0;
}