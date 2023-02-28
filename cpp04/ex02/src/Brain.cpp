#include "Brain.hpp"
// Constructor initializes attributes to 0 by default 
Brain::Brain()
	: _ideas()
{
	std::cout << "Brain has been constructed" << std::endl;
}


Brain::Brain( const Brain& rhs)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	std::cout << "Brain has been copied" << std::endl;
}

Brain &Brain::operator=( const Brain& rhs)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	std::cout << "Brain has been coppied through assignment" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
}

