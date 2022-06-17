#include "ShrubberyCreationForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm ::ShrubberyCreationForm (std::string const target) : Form(target, 145, 137) ,  _target(target)
{
	std::cout << "\e[0;33mFields Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


ShrubberyCreationForm ::ShrubberyCreationForm ( const ShrubberyCreationForm  & src ) : Form(src)
{
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm ::~ShrubberyCreationForm ()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm  &				ShrubberyCreationForm ::operator=( ShrubberyCreationForm  const & rhs )
{
	_target = rhs._target;
	return *this;
} 

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->TryExec(executor))
		return;
	std::cout << executor.getName() << " create the file " << std::endl;
	std::string str = this->_target;
	str.append("_shrubbery");
	std::ofstream file(str.c_str());
	file << "                                          " << std::endl
	 << "              ,@@@@@@@,                   " << std::endl
	 << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl
	 << "    ,&%%&%&&%,@@@@@/@@@@@@,8888"<< "\\" << "88/8o     " << std::endl
	 << "   ,%&"<< "\\" << "%&&%&&%,@@@"<< "\\" << "@@@/@@@88"<< "\\" << "88888/88'    " << std::endl
	 << "   %&&%&%&/%&&%@@"<< "\\" << "@@/ /@@@88888"<< "\\" << "88888'    " << std::endl
	 << "   %&&%/ %&%%&&@@"<< "\\" << " V /@@' `88"<< "\\" << "8 `/88'     " << std::endl
	 << "   `&%"<< "\\" << " ` /%&'    |.|        "<< "\\" << " '|8'       " << std::endl
	 << "       |o|        | |         | |         " << std::endl
	 << "       |.|        | |         | |         " << std::endl
	 << "    "<< "\\" << ""<< "\\" << "/ ._"<< "\\" << "//_/__/  ,"<< "\\" << "_//__"<< "\\" << ""<< "\\" << "/.  "<< "\\" << "_//__/_ "<< std::endl;
	file.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
