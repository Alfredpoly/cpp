#include "Fixed.hpp"

// Constructor initializes attributes to 0 by default 
Fixed::Fixed(): _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = (val << _fract);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = (roundf(val * (1 << _fract)));
}

float Fixed::toInt( void ) const
{
	return (this->_fixed >> _fract);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixed / (float)(1 << _fract));
}
 
int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed = raw;
}

Fixed::Fixed( const Fixed& rhs)
{
	this->_fixed = rhs._fixed;
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed&	Fixed::operator=( const Fixed& rhs )
{
	this->_fixed = rhs._fixed;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}