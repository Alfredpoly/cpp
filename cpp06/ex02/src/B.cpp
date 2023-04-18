#include "B.hpp"

B::B()
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
 
