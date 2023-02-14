#ifndef __EASYFIND_HPP
#define __EASYFIND_HPP
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T t, int ocu)
{
	typename T::iterator ret;
	ret = std::find(t.begin(), t.end(), ocu);
	if(*ret != ocu)
		throw std::out_of_range("Doesn't exist in the array.");
	return ret;
}

#endif