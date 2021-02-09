#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	

	ofstream outputFile;
	string haiku1 = "Junglers inting\n",
		haiku2 = "Stealing the CS\n",
		haiku3 = "Life of a ADC\n";
	
	outputFile.open("haiku.txt");

	cout << "Now writing data to the file.\n\n";

	
	outputFile << haiku1;
	outputFile << haiku2;
	outputFile << haiku3;
	

	outputFile.close();

	cout << "Done Saving to the File.\n\n";





	return 0;
}