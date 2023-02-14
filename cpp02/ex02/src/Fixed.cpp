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

Fixed::Fixed( const Fixed& rhs) : _fixed(rhs._fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed&	Fixed::operator=( const Fixed& rhs )
{
	this->_fixed = rhs._fixed;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

bool	Fixed::operator< ( const Fixed& rhs )
{
	return (this->_fixed < rhs._fixed);
}

bool	Fixed::operator> ( const Fixed& rhs )
{
	return (this->_fixed > rhs._fixed);
}

bool	Fixed::operator<= ( const Fixed& rhs )
{
	return !(this->_fixed > rhs._fixed);
}

bool	Fixed::operator>= ( const Fixed& rhs )
{
	return !(this->_fixed < rhs._fixed);
}

bool	Fixed::operator== ( const Fixed& rhs )
{
	return (this->_fixed == rhs._fixed);
}

bool	Fixed::operator!= ( const Fixed& rhs )
{
	return !(this->_fixed == rhs._fixed);
}

Fixed	Fixed::operator+ ( const Fixed& rhs ) const
{
	Fixed ret;
	ret.setRawBits(this->_fixed + rhs._fixed);
	return ret;
}

Fixed	Fixed::operator- ( const Fixed& rhs ) const
{
	Fixed ret;
	ret.setRawBits(this->_fixed - rhs._fixed);
	return ret;
}

Fixed	Fixed::operator* ( const Fixed& rhs ) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));

}

Fixed	Fixed::operator/ ( const Fixed& rhs ) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++ ()
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++ ( int val )
{
	Fixed ret = *this;
	++*this;
	return (ret);
}

Fixed&	Fixed::operator-- ()
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator-- ( int val )
{
	Fixed ret = *this;
	--*this;
	return (ret);
}

Fixed&	Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._fixed < b._fixed)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._fixed > b._fixed)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

