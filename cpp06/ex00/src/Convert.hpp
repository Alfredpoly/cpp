#ifndef CONVERT_H
#define CONVERT_H
#include <iostream>
#include <iomanip>
#include <string>
 
// Class definition 
class Convert
{
private: 
	char _charValue;
	int _intValue;
	float _floatValue;
	double _doubleValue;
 
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
