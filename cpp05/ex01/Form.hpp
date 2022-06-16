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
		Form(const std::string name, const int signedGrade, const int execGradem, bool s);
		~Form();

		Form &		operator=( Form const & rhs );
		//accessor
		int			getSignedGrade() const;
		const std::string	getName() const;
		int			getExecGrade() const;
		bool		getSigned() const;
		void		BeSigned(const Bureaucrat & b);

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

	private:
		const std::string _name;
		const int 		_signedGrade;
		const int		_execGrade;
		bool			_signed;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */