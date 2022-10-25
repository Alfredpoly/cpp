#include "Brain.hpp"
// Constructor initializes attributes to 0 by default 
Brain::Brain()
	: _ideas()
{
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
}

