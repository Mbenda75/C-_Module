#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) , _target(target)
{
	std::cout << "\e[0;33mFields Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src)
{
	*this = src;
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


void PresidentialPardonForm::execute( Bureaucrat const &executor ) const
{
   if (!this->TryExec(executor))
		return;
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */