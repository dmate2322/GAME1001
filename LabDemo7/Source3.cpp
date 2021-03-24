#include <iostream>
using namespace std;

class Demo
{
public:
	Demo() // Default constructor
	{
		cout << "Now the constructor is running.\n";
	}
	~Demo()
	{
		cout << "Now the destructor is running.\n";
	}



};

int main()
{
	cout << "This is displayed before the object is created.\n";

	Demo demObj; // Defining a demo object

	cout << "This is displayed after the object is created.\n";

	return 0;

}