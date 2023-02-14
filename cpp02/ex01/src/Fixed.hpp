#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <string>
#include <math.h>  

// Class definition 
class Fixed
{
private: 
	int _fixed;
	static const int _fract = 8;
 
public: 
// Constructor 
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed( const Fixed &rhs);
	~Fixed();
	Fixed& operator=( const Fixed &rhs);
	int getRawBits() const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	float toInt( void ) const;
}; 

std::ostream& operator<<(std::ostream& os, const Fixed& obj);
 
#endif
