#ifndef A_H
#define A_H
#include <iostream>
#include <string>
 
// Class definition 
class A : public Base
{
public:
	A(); 
	A( const A &rhs); 
	~A(); 
	A& operator=( const A &rhs);
}; 
 
#endif
