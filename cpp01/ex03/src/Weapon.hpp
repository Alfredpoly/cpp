#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
 
// Class definition 
class Weapon
{
private: 
	std::string _type;
 
public:
	Weapon();
	Weapon(std::string newType);
	~Weapon();
	std::string getType();
	void setType(std::string _type);
}; 
 
#endif
