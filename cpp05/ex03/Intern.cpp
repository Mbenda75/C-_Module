#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() 
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() 
{
}

const std::string tab[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };

Form* Intern::makeForm(std::string name, const std::string target)
{
	int count = -1;

	for (int i = 0; i < 3; i++)
	{
		if (name == tab[i])
		{
			count = i;
			break;
		}
	}
	if (count == -1)
	{
		std::cout << "The form name '" << name << "' doesn't match with our current forms" << std::endl;
		return (NULL);
	}
	return (f[count](target));
}