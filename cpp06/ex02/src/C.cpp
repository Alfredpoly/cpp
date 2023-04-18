#include "C.hpp"

C::C()
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
 
