#pragma once
#include <string>
#include <vector>
#include <thread>

using namespace std;
class Weapons
{
private:
	string name;
	string sound;
	int uses;
	int cost;
	bool owner;

public:
	Weapons();
	~Weapons();

	void setWeapon(string, string, int, int, bool);
	void setUse(int);
	void setCost(int);
	void setOwner(bool);

	string getName() { return name; }
	string getSound() { return sound; }
	int getUses() { return uses; }
	int getCost() { return cost; }
	int getOwner() { return owner; }

	

};

