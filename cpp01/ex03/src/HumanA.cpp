#include "HumanA.hpp"
 
HumanA::HumanA(std::string newName, Weapon &newWeapon) 
	: _name(newName), _weapon(newWeapon)
{}

HumanA::~HumanA()
{

}
 
void HumanA::attack()
{
 	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl; 
}
 
