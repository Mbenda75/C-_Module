
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Form;

class	Intern 
{
	public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);
		Form *	shrubbery(std::string form, std::string target);
		Form *	robotomy(std::string form, std::string target);
		Form *	presidential(std::string form, std::string target);
		void setName(void);
		void setPtr(void);
		Intern &			operator=(Intern const & rhs);
		Form*				makeForm(std::string form, std::string target);
		typedef struct s_status
		{
			std::string name;
			Form *(Intern::*ptr)(std::string form, std::string target);
		}	t_status;
		class FormDontMatch : public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		t_status _tab[3];
};
#endif