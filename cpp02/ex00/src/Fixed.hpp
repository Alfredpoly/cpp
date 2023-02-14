#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <string>
 
// Class definition 
class Fixed
{
private: 
	int _fixed;
	static const int _fract = 8;
 
public: 
// Constructor 
	Fixed(); 
	Fixed( const Fixed &rhs);
	~Fixed(); 
	Fixed& operator=( const Fixed &rhs); 
// Getters 
	int getRawBits() const;

	void setRawBits( int const raw );
}; 
 
#endif
