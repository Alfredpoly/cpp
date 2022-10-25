#ifndef HUMANA_H
#define HUMANA_H
#include <iostream>
#include <string>
#include "Weapon.hpp"
// Class definition 
class HumanA
{
private: 
	Weapon &_weapon;
	std::string _name;
	HumanA();
public: 
	~HumanA(); 
	HumanA(std::string newName, Weapon &newWeapon);
	void attack();
}; 
 
#endif
