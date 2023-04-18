#include "A.hpp"

A::A()
{

}
 
A::A( const A& rhs)
{
	*this = rhs;
}
 
A::~A()
{

}

A&	A::operator=( const A& rhs )
{
	return *this;
}

