#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Mo"), _grade (2)
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int g) : _name(name)
{
	std::cout << "\e[0;33mFields Constructor called of Bureaucrat\e[0m" << std::endl;
	try
	{
		if (g <= 0){
			_grade = 0;
			throw Bureaucrat::GradeTooHighException();
		}
		else if (g > 150){
			_grade = 0;
			throw Bureaucrat::GradeTooLowException();
		} 
		else 
			this->_grade = g;
	}
	catch (Bureaucrat::GradeTooHighException high)
	{
		std::cerr << high.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException low)
	{
		std::cerr << low.what() << std::endl;
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): _name(src._name)
{
	*this = src;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mdestructor called of Bureaucrat\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "\e[0;32mOperator = from Bureaucrat Class\e[0m" << std::endl;
	_grade = rhs.getGrade();
	// _name = rhs._name;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::Inc() 
{
	try
	{
		if (this->_grade - 1 <= 0) 
			throw Bureaucrat::GradeTooHighException();
		else 
			this->_grade -= 1;
	}
	catch (Bureaucrat::GradeTooHighException high)
	{
		std::cerr << high.what() << std::endl;
	}

}

void	Bureaucrat::Decr() 
{
	try
	{
		if (this->_grade + 1 >= 151) 
			throw Bureaucrat::GradeTooLowException();
		else 
			this->_grade  += 1;
	}
	catch (Bureaucrat::GradeTooLowException low)
	{
		std::cerr << low.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception : Grade is too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception : Grade is too high ");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

/* ************************************************************************** */