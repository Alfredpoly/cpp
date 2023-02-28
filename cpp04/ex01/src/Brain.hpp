#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>
#include <string>
 
// Class definition 
class Brain
{
private: 
	std::string _ideas[100];
 
public: 
	Brain();
	Brain( const Brain& rhs);
	Brain &operator=( const Brain& rhs);
	~Brain();
}; 
 
#endif
