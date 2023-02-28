#include "Fixed.hpp"
// Constructor initializes attributes to 0 by default 
Fixed::Fixed()
	: _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}
 
Fixed::Fixed( const Fixed& rhs) : _fixed(rhs.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=( const Fixed& rhs )
{
	this->_fixed = rhs._fixed;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

// Getters 
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;
}

 
