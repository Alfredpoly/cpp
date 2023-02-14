#ifndef INTERN_H
#define INTERN_H
#include <iostream>
#include <string>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private: 
 
public: 
	Intern(); 
	Intern( const Intern &rhs); 
	~Intern(); 
	Intern& operator=( const Intern &rhs); 
	Form* makeForm(std::string nameForm, std::string target);
}; 
 
#endif
