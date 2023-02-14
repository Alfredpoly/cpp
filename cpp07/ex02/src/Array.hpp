#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <string>

template<class T>
class Array {
	private:
		unsigned int	_n;
		T				*_arr;
	public:
		Array() : _n(0), _arr(new T[0]) {};
		Array(unsigned int n): _n(n), _arr(new T[_n]) {};
		Array(const Array &rhs) : _n(rhs._n), _arr(new T[_n])
		{
			for(int i = 0; i < _n; i++)
				_arr[i] = rhs._arr[i];
		};
		Array operator=(const Array &rhs)
		{
			_n = rhs._n;
			delete[] _arr;
			_arr = new T[_n];
			for(int i = 0; i < _n; i++)
				_arr[i] = rhs._arr[i];
		};
		T& operator[](unsigned int i)
		{
		    if (i >= _n)
		        throw std::out_of_range("array out of range");
			return (_arr[i]);
		};
		unsigned int size() {return _n;}
		~Array()
		{
			std::cout << "delete _arr" << std::endl;
			if (_arr)
				delete [] _arr;
		};
};


#endif