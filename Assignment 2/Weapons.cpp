#include "Weapons.h"
Weapons::Weapons()
{

}
Weapons::~Weapons()
{

}

void Weapons::setWeapon(string n, string s, int u, int c, bool o)
{
	name = n;
	sound = s;
	uses = u;
	cost = c;
	owner = o;
}

void Weapons::setName(string n)
{
}

void Weapons::setSound(string)
{
}

void Weapons::setUse(int u)
{
	uses = u;
}

void Weapons::setCost(int)
{
}

void Weapons::setOwner(bool o)
{
	owner = o;
}
