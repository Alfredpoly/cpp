#include "HumanB.hpp"

HumanB::HumanB(std::string newName) 
	: _name(newName)
{
	this->_weapon = new Weapon();
}

HumanB::~HumanB()
{}
 
// Setters 
void HumanB::setWeapon(Weapon &newWeapon) 
{ 
	delete this->_weapon;
	this->_weapon = &newWeapon; 
}

void HumanB::attack()
{
	if (this->_weapon->getType().empty())
		std::cout << this->_name << " is completely defenseless!" << std::endl;
	else
 		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl; 
}
 