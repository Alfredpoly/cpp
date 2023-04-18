#ifndef C_H
#define C_H
#include <iostream>
#include <string>
#include "Base.hpp"

 
// Class definition 
class C : public Base
{
public:
	C(); 
	C( const C &rhs); 
	~C(); 
	C& operator=( const C &rhs);
}; 
 
#endif
