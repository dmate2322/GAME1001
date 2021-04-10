#include <iostream>
#include "Weapons.h"
using namespace std;


int main()
{
	const int SIZE = 5;
	Weapons weapon[SIZE];

	int walletBalance = 1000;
	int menuChoice;
	int weaponChoice = 0;
	int weaponChoice2 = 0;
	int input = 0;
	bool flag = false;
	bool slotFlag = false;
	bool sim = false;

	weapon[0].setWeapon("Blade of the Ruined King", "Swooosh", 5, 500, false);
	weapon[1].setWeapon("Wardens Mail", "Klack", 10, 750, false);
	weapon[2].setWeapon("Warhammer", "Smash", 6, 600, false);
	weapon[3].setWeapon("Rageblade", "Ting", 8, 300, false);
	weapon[4].setWeapon("LongSword", "Klunk", 15, 200, false);

	while (flag == false)
	{
		cout << "Welcome to my store, please select 1 of the 3 options " << endl;
		cout << "1. Buy a Weapon" << endl;
		cout << "2. Check Balance" << endl;
		cout << "3. Exit Store" << endl << endl;
		cin >> menuChoice;

		if (menuChoice == 1)
		{

			cout << "\n***************************** " << endl;
			cout << "1. Blade of the Ruined King " << endl;
			cout << "2. Wardens Mail" << endl;
			cout << "3. Warhammer" << endl;
			cout << "4. Rageblade" << endl;
			cout << "5. LongSword" << endl;
			cout << "***************************** " << endl;
			cin >> weaponChoice;
			
			if (weapon[weaponChoice - 1].getOwner() == false)
			{
				cout << "\nYou have selected " << weapon[weaponChoice - 1].getName();
				cout << "\nWeapon Cost: " << "$" << weapon[weaponChoice - 1].getCost();
				cout << "\nWeapon Durability: " << weapon[weaponChoice - 1].getUses();
				cout << "\nYou currently have: " << "$" << walletBalance << endl;
				cout << "\nAre you sure you want to purchase this weapon? 1(yes) 2(no) ";
				cin >> weaponChoice2;

				if (weaponChoice2 == 1)
				{
					if (walletBalance >= weapon[weaponChoice - 1].getCost())
					{
						walletBalance -= weapon[weaponChoice - 1].getCost();
						weapon[weaponChoice - 1].setOwner(true);
						cout << "Remaining Balance: " << walletBalance << endl << endl;
					}
					else
					{
						cout << "\nSorry looks like you're poor. Come back when you have more money!" << endl << endl;
					}
				}
				else
				{
					cout << "Sorry you don't like the weapon, please head back to the beginning and choose something else!" << endl << endl;
				}
			}
			else
			{
				cout << "Looks like you already own this weapon. Please purchase something else you goon!" << endl << endl;
	
			}
		}

		if (menuChoice == 2)
		{
			cout << "\nYour current balance is: " << "$" << walletBalance << endl << endl;
		}
		if (menuChoice == 3)
		{
			cout << "\nSad to see you go! Do come back we love your money." << endl;
			flag = true;
		}
		
		this_thread::sleep_for(2s);
	}


	cout << "\nYou're now entering the proving grounds. This is where you will use your newly puchased weapons!" << endl;
	while (sim == false)
	{
		cout << "Please select a weapon" << endl << endl;
		for (int i = 0; i < SIZE; i++)
		{
			if (weapon[i].getOwner() == true)
			{
				cout << weapon[i].getName() << endl;
			}
		}
		cout << "Exit Simulation (5)" << endl;

		while (input < 1 || input > 5)
		{
			cin >> input;
			if (weapon[input - 1].getOwner() == false)
			{
				cout << "Yo you don't have a weapon in that slot. Try again!\n";
				input = 0;
			}
		}

		if (input == 5)
		{
			cout << "Thank you for participating in training!" << endl;
			sim = true;
		}
	}
	return 0;
}