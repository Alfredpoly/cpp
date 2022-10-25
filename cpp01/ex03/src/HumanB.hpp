#ifndef HUMANB_H
#define HUMANB_H
#include <iostream>
#include <string>
#include "Weapon.hpp"

// Class definition 
class HumanB
{
private: 
	Weapon *_weapon;
	std::string _name;
	HumanB();
public:
	HumanB(std::string newName);
	~HumanB();
	void setWeapon(Weapon &_weapon);
	void attack();
}; 
 
#endif
