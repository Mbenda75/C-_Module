#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() 
{
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

/*
** --------------------------------OVERLOAD --------------------------------
*/

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() 
{
}

/*
** -------------------------------- METHODS --------------------------------
*/

Form * Intern::shrubbery(std::string form, std::string target)
{
    std::cout << "Intern creates " << form << std::endl;
	return (new ShrubberyCreationForm(target));
}
Form *	Intern::robotomy(std::string form, std::string target)
{
	std::cout << "Intern creates " << form << std::endl;
	return (new RobotomyRequestForm(target));
}
Form *	Intern::presidential(std::string form, std::string target)
{
	std::cout << "Intern creates " << form << std::endl;
	return (new PresidentialPardonForm(target));
}

Form * Intern::makeForm(std::string name, std::string target)
{
    this->setName();
    this->setPtr();
	int i = 0;

	try
	{
		while (i < 3)
		{
			if (_tab[i].name == name)
				return ((this->*_tab[i].ptr)(name, target));
			i++;
		}
		throw FormDontMatch();
	}
	catch(Intern::FormDontMatch e)
	{
		std::cerr << e.what() << '\n';
	}
	
    
	return (NULL);
}

void Intern::setName(void)
{
	this->_tab[0].name = "shrubbery creation";
	this->_tab[1].name = "robotomy request";
	this->_tab[2].name = "presidential pardon";
}

void Intern::setPtr(void)
{
	this->_tab[0].ptr = &Intern::shrubbery;
	this->_tab[1].ptr = &Intern::robotomy;
	this->_tab[2].ptr = &Intern::presidential;
}

const char *Intern::FormDontMatch::what() const throw()
{
	return ("Intern exeption : The form does not match any of ours");
}