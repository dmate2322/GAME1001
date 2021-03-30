#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

class Character
{
private:
	
	int hp;
	int attack;
	string name;

public:

	Character()
	{
		name = "Drake";
		hp = 100;
		attack = 1;
	}
	void setAttack(int);
	void setHp(int);
	void setName(string);
	int getHp() { return hp; }
	int getAttack() { return attack; }
	string getName() { return name; }
	
};

