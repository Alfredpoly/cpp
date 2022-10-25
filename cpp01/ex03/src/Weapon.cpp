#include "Weapon.hpp"
// Constructor initializes attributes to 0 by default 
Weapon::Weapon()
{

}
 
Weapon::Weapon(std::string newType) 
	: _type(newType)
{
}

Weapon::~Weapon()
{

}

// Getters 
std::string Weapon::getType() { return this->_type; }
 
// Setters 
void Weapon::setType(std::string newType) { 
	this->_type = newType; 
	}

