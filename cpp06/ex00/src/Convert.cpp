#include "Convert.hpp"
#include <math.h>

// Constructor initializes attributes to 0 by default 
Convert::Convert()
	: _charValue(0), _intValue(0), _floatValue(0), _doubleValue(0)
{

}

Convert::Convert(std::string buff)
{
	convertToDouble(buff);
	convertToFloat();
	convertToInt();
	convertToChar();
}

void Convert::convertToChar()
{	
	if (_intValue > 127 || _intValue < 0)
		std::cout << "char: impossible" << std::endl;
	else if ((_intValue <= 32 && _intValue >= 0) || _intValue == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
	{
		_charValue = static_cast<char>(_intValue);
		std::cout << "Char: " << _charValue << std::endl;
	}
}


void Convert::convertToInt()
{
	if (_floatValue > INT_MAX || _floatValue < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
	{
		if (_floatValue == INT_MAX)
			_intValue = INT_MAX;
		else
			_intValue = static_cast<int>(_floatValue);
		std::cout << "int: " << _intValue << std::endl;
	}
}

void Convert::convertToFloat()
{
	if (_doubleValue > std::numeric_limits<float>::max() && _doubleValue < std::numeric_limits<float>::min())
		std::cout << "float: impossible" << std::endl;
	else
	{
		_floatValue = static_cast<float>(_doubleValue);
		std::cout << "float: " << _floatValue;
		if (_floatValue == static_cast<int>(_floatValue))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void Convert::convertToDouble(std::string buff)
{
	if (std::isalpha(buff[0]))
		_doubleValue = static_cast<double>(buff[0]);
	else
		_doubleValue = std::stod(buff);
	std::cout << "double: " << _doubleValue;
	if (_doubleValue == static_cast<int>(_doubleValue))
		std::cout << ".0";
	std::cout << std::endl;
}


Convert::~Convert()
{

}

Convert&	Convert::operator=( const Convert& rhs )
{
	return *this;
}

char Convert::getCharValue() { return _charValue; }
int Convert::getIntValue() { return _intValue; }
float Convert::getFloatValue() { return _floatValue; }
double Convert::getDoubleValue() { return _doubleValue; }

void Convert::setCharValue(char newCharValue) { _charValue = newCharValue; }
void Convert::setIntValue(int newIntValue) { _intValue = newIntValue; }
void Convert::setFloatValue(float newFloatValue) { _floatValue = newFloatValue; }
void Convert::setDoubleValue(double newDoubleValue) { _doubleValue = newDoubleValue; }
 
 
