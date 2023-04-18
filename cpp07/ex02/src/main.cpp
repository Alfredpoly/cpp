#include <iostream>
#include "Array.hpp"


int main() {
	Array<int> arr1;
	Array<std::string> arr2(3);
	Array<int> arr3(5);

	std::cout << arr3[2] << std::endl;
	try {
		std::cout << arr3[-1] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << arr3[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "size arr3: " << arr3.size() << std::endl;

    int * a = new int();
    std::cout << *a << std::endl;
	
    arr3[1] = 10;
	Array<int> arr4 = arr3;
	arr4[2] = 20;

	std::cout << "arr 3: " << std::endl;
	for (unsigned int i = 0; i < arr3.size(); i++)
		std::cout << arr3[i] << " ";
	std::cout << "\narr 4: " << std::endl;
	for (unsigned int i = 0; i < arr4.size(); i++)
		std::cout << arr4[i] << " ";
	std::cout << std::endl;
}