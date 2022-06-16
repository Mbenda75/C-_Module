#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

	public:

		Form();
		Form( Form const & src );
		Form(const std::string name, const int signedGrade, const int execGrade);
		virtual ~Form();

		Form &		operator=( Form const & rhs );
		//accessor
		int			getSignedGrade() const;
		const std::string	getName() const;
		int			getExecGrade() const;
		bool		getSigned() const;
		void		BeSigned(const Bureaucrat & b);
		bool 		TryExec(const Bureaucrat &b) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;

		//Exeption
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class ExecTooLowExeption : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class	NotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		const std::string _name;
		const int 		_signedGrade;
		const int		_execGrade;
		bool			_signed;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */