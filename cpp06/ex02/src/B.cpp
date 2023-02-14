#include "B.hpp"
// Constructor initializes attributes to 0 by default 
B::B()
	: 
{

}
 
B::B( const B& rhs)
{
	*this = rhs;
}
 
B::~B()
{

}

B&	B::operator=( const B& rhs )
{
	return *this;
}
 
