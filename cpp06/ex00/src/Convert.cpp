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
		_retChar = "impossible";
	else if ((_intValue <= 32 && _intValue >= 0) || _intValue == 127)
		_retChar = "Non displayable";
	else
	{
		_charValue = static_cast<char>(_intValue);
		_retChar = _charValue;
	}
}


void Convert::convertToInt()
{
	if (_floatValue > INT_MAX || _floatValue < INT_MIN)
		_retInt = "int: impossible\n";
	else
	{
		if (_floatValue == INT_MAX)
			_intValue = INT_MAX;
		else
			_intValue = static_cast<int>(_floatValue);
		_retInt = "int: " + std::to_string(_intValue) + "\n";
	}
}

void Convert::convertToFloat()
{
	if (_doubleValue > std::numeric_limits<float>::max() && _doubleValue < std::numeric_limits<float>::min())
		_retFloat = "float: impossible\n";
	else
	{
		_floatValue = static_cast<float>(_doubleValue) ;
		_retFloat = "float: " + std::to_string(_floatValue  + 0.05).substr(0, std::to_string(_floatValue).find(".") + 2);
		_retFloat += "f\n";
	}
}

void Convert::convertToDouble(std::string buff)
{
	if (std::isalpha(buff[0]))
		_doubleValue = static_cast<double>(buff[0]);
	else
		_doubleValue = std::stod(buff);
	_retDouble = "double: " + std::to_string(_doubleValue + 0.05).substr(0, std::to_string(_doubleValue).find(".") + 2);
	_retDouble += "\n";
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

std::string Convert::getCharString() { return _retChar; }
std::string Convert::getIntString() { return _retInt; }
std::string Convert::getFloatString() { return _retFloat; }
std::string Convert::getDoubleString() { return _retDouble; }

void Convert::setCharValue(char newCharValue) { _charValue = newCharValue; }
void Convert::setIntValue(int newIntValue) { _intValue = newIntValue; }
void Convert::setFloatValue(float newFloatValue) { _floatValue = newFloatValue; }
void Convert::setDoubleValue(double newDoubleValue) { _doubleValue = newDoubleValue; }
 
