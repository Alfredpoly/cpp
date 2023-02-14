#ifndef B_H
#define B_H
#include <iostream>
#include <string>
 
// Class definition 
class B	: public Base
{
private: 
 
public: 
// Constructor 
	B(); 
	B( const B &rhs); 
	~B(); 
	B& operator=( const B &rhs);
}; 
 
#endif
