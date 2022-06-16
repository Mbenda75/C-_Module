#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm  : public Form
{

	public:

		ShrubberyCreationForm (std::string const target);
		ShrubberyCreationForm ( ShrubberyCreationForm  const & src );
		~ShrubberyCreationForm ();

		ShrubberyCreationForm  &		operator=( ShrubberyCreationForm  const & rhs );
		void							execute( Bureaucrat const &executor ) const;

	private:
	std::string _target;

};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm  const & i );

#endif /* ****************************************** SHRUBBERYCREATIONFORM _H */