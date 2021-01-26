//Calculate the area of a rectangle
#include <iostream>	
#include <iomanip>		
using namespace std;

int main()
{
	const int SIZE = 81;
	char sentence[SIZE];     // 12 memory cells

	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE);
	cout << "You entered: " << sentence << endl;

	return 0;
}
