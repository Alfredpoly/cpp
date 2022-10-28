#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>
 
// Class definition 
class Data
{
public: 
	void*	_data;
	Data();
	Data(void* ptr);
	void helloworld();
	Data( const Data &rhs); 
	~Data(); 
	Data& operator=( const Data &rhs);
}; 
 
#endif
