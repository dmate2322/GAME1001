#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo
{
	double  food,		// Food costs
			medical,	// Medical costs 
			license,	// License fee
			misc;		// Miscellaneous costs
};

struct PetInfo
{
	string name;
	string type;
	int age;

	CostInfo cost;

	PetInfo() // Default constructors
	{
		name = "unknown";
		type = "unknown";
		age = 0;

		cost.food = cost.medical = cost.license = cost.misc = 0.0;
	}
};

int main()
{
	PetInfo pet;

	// Assign values to the pet member variables
	pet.name = "Duke";
	pet.type = "Cat";
	pet.age = 6;

	pet.cost.food = 200.00;
	pet.cost.medical = 200.00;
	pet.cost.license = 5.00;

	// Display the total annual cost for the pet
	cout << fixed << showpoint << setprecision(2);
	cout << "Annual costs for my " << pet.age << "-year-old " << pet.type << " " << pet.name
		<< " are $" << (pet.cost.food + pet.cost.medical + pet.cost.license + pet.cost.misc) << endl;

	return 0;
}