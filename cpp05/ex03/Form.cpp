#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() :  _name("Form one"), _signedGrade(2), _execGrade(2), _signed(false)
{
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
	try
	{
		if (_signedGrade <= 0 || _execGrade <=0)
			throw Form::GradeTooHighException();
		else if (_signedGrade > 150 || _execGrade > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException high)
	{
		std::cerr << high.what() << std::endl;
	}
	catch (Form::GradeTooLowException low)
	{
		std::cerr << low.what() << std::endl;
	}
}

Form::Form(const std::string name, const int signedGrade, const int execGrade) : _name(name), _signedGrade(signedGrade), _execGrade(execGrade), _signed(false)
{
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
	try
	{
		if (_signedGrade <= 0 || _execGrade <=0)
			throw Form::GradeTooHighException();
		else if (_signedGrade > 150 || _execGrade > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException high)
	{
		std::cerr << high.what() << std::endl;
	}
	catch (Form::GradeTooLowException low)
	{
		std::cerr << low.what() << std::endl;
	}
}
Form::Form( const Form & src ) : _name(src._name) , _signedGrade(src._signedGrade), _execGrade(src._execGrade)
{
	*this = src;
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
} 


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	_signed = rhs._signed;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", bureaucrat SignedGrade " << i.getSignedGrade() << " and the form is " << i.getSigned() << " :1 if signed 0 if not" << std::endl;
	o << i.getName() << ", bureaucrat ExecGrade " << i.getExecGrade() << " and the form is " << i.getSigned() << " :1 if signed 0 if not";
	return o;
}
 

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form Exception : Grade is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form Exception : Grade is too high");
}

char const *Form::NotSignedException::what() const throw()
{
	return ("Form Exception : form is not signed");
}

char const *Form::ExecTooLowExeption::what() const throw()
{
	return ("Form Exception : form cant't be exec");
}


void	Form::BeSigned(const Bureaucrat & b)
{
	try
	{
		if (b.getGrade() <= _signedGrade && b.getGrade() <= _execGrade)
			_signed  = true;
		else if(b.getGrade() > _signedGrade  && b.getGrade() > _execGrade)
			throw Form::GradeTooLowException();
		else if (b.getGrade() <= _signedGrade && b.getGrade() >_execGrade)
			throw Form::ExecTooLowExeption();
	}
	catch(Form::GradeTooLowException low)
	{
		std::cerr << low.what() << std::endl;
	}
	catch(Form::ExecTooLowExeption low)
	{
		std::cerr << low.what() << std::endl;
	}
	
}

bool Form::TryExec(const Bureaucrat &b) const
{
	try
	{
		if (!this->_signed)
			throw Form::NotSignedException();
		else if (this->_execGrade < b.getGrade())
			throw Form::GradeTooLowException();
		else
			return (true);
	}
	catch(Form::NotSignedException e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException low)
	{
		std::cerr << low.what() << std::endl;
	}

	return (false);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string Form::getName() const
{
	return (_name);
}

int	Form::getSignedGrade() const
{
	return (_signedGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

bool	Form::getSigned() const
{
	return (_signed);
}


/* ************************************************************************** */