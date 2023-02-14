#ifndef ITER_H
#define ITER_H
#include <iostream>
#include <string>

template<typename T>
void iter(T addr[], size_t l, void (*f)(T&)) {
	for (int i = 0; i < l; i++)
		f(addr[i]);
}

#endif