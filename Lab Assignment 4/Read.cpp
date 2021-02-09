#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inputFIle;
	string haiku;

	inputFIle.open("haiku.txt");

	cout << "Reading data from the file.\n\n\n";

	getline(inputFIle,haiku);
	cout << (haiku) << endl;

	getline(inputFIle,haiku);
	cout << haiku << endl;

	getline(inputFIle, haiku);
	cout << haiku << endl;

	inputFIle.close();




	return 0;
}