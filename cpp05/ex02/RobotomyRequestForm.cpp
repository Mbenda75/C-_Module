#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) ,_target(target)
{
	std::cout << "\e[0;33mFields Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
	*this = src;
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	_target = rhs._target;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute( Bureaucrat const &executor ) const
{
	if (!this->TryExec(executor))
		return;
	std::cout << "*ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ*" << std::endl;
	if (!(std::rand() % 2))
		std::cout << this->_target << " has been succesfully robotomised" << std::endl;
	else
		std::cout << this->_target << " robotomy has failed" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string RobotomyRequestForm::getTarget() const
{
    return _target;
}

/* ************************************************************************** */