#include "C.hpp"
// Constructor initializes attributes to 0 by default 
C::C()
	: 
{

}
 
C::C( const C& rhs)
{
	*this = rhs;
}
 
C::~C()
{

}

C&	C::operator=( const C& rhs )
{
	return *this;
}
 
