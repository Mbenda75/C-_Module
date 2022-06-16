#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class Form;
class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, int g);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const std::string getName() const;
		int			getGrade() const;
		void		setGrade(int g);
		void			Decr();
		void			Inc();
		 void			signForm(const Form & s );
		Bureaucrat &		operator=( Bureaucrat const & rhs );

	// Exceptions
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
		int _grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */