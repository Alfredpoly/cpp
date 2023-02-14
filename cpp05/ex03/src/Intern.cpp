#include "Intern.hpp"
// Constructor initializes attributes to 0 by default 
Intern::Intern()
{
	std::cout << "Intern is constructed " << std::endl;

}
 
Intern::Intern( const Intern& rhs)
{
	*this = rhs;
}
 
Intern::~Intern()
{	
	std::cout << "Intern is destroyed " << std::endl;
}

Intern&	Intern::operator=( const Intern& rhs )
{
	return *this;
}
 

Form	*shrubberyCreation(std::string target)
{
	ShrubberyCreationForm	*ret = new ShrubberyCreationForm(target);
	return (ret);
}

Form	*robotomyRequest(std::string target)
{
	RobotomyRequestForm	*ret = new RobotomyRequestForm(target);
	return (ret);
}

Form	*presidentialPardon(std::string target)
{
	PresidentialPardonForm	*ret = new PresidentialPardonForm(target);
	return (ret);
}

Form* Intern::makeForm(std::string nameForm, std::string target)
{
	std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form *(*forms[])(std::string) = {shrubberyCreation, robotomyRequest, presidentialPardon};
	for (size_t i = 0; i < 3; i++)
	{
		if (formNames[i] == nameForm)
		{
			std::cout << "Intern creates " << nameForm << std::endl;
			Form *form = forms[i](target);
			std::cout << std::endl;
			return form;
		}
	}
	std::cout << "couldn't find form's name" << std::endl;
	return nullptr;
}
