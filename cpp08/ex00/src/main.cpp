#include "easyfind.hpp"
#include <iostream>
#include <array>

int main() {
	std::array<int, 5> a = {1, 2, 3, 4, 5};
	std::cout << "----find 4 in the array-----" << std::endl;
	try{
		int res = *easyfind(a, 4);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----find 8 in the array-----" << std::endl;
	try{
		int res = *easyfind(a, 8);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e) 
	{
		std::cerr << e.what() << '\n';
	}
}