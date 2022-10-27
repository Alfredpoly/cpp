#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> 
 
// Class definition 
class Convert
{
private: 
	char _charValue;
	int _intValue;
	float _floatValue;
	double _doubleValue;
	std::string _retChar;
	std::string _retInt;
	std::string _retFloat;
	std::string _retDouble;

public:
	Convert(); 
	Convert(std::string buff);
	Convert( const Convert &rhs); 
	Convert(char newCharValue, int newIntValue, float newFloatValue, double newDoubleValue);
	~Convert(); 
	Convert& operator=( const Convert &rhs);
	char getCharValue(); 
	int getIntValue(); 
	float getFloatValue(); 
	double getDoubleValue();
	std::string getCharString(); 
	std::string getIntString();
	std::string getFloatString();
	std::string getDoubleString();
	void setCharValue(char _charValue); 
	void setIntValue(int _intValue); 
	void setFloatValue(float _floatValue); 
	void setDoubleValue(double _doubleValue);
	void convertToChar();
	void convertToInt();
	void convertToFloat();
	void convertToDouble(std::string buff);
}; 
 
#endif
