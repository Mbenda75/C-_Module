#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include "Form.hpp"
#include <cstdlib>


class RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		const std::string 			getTarget() const;
		void 						execute( Bureaucrat const &exec) const;

	private:
		std::string _target;
	

};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */