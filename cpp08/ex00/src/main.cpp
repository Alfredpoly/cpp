#include "easyfind.hpp"
#include <iostream>
#include <array>

int main() {
	std::array<int, 5> a = {1, 2, 3, 4, 5};
	try{
		int res = *easyfind(a, 4);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << '\n';
	}
	try{
		int res = *easyfind(a, 8);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << '\n';
	}
}