#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "\e[0;33mCopyConstructor called of Brain\e[0m" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "\e[0;33mOperator= called of Brain\e[0m" << std::endl;
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			_Ideas[i] = rhs._Ideas[i];
	}
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Brain::setIdea(int index, std::string idea) 
{
	_Ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return _Ideas[index];
}

/* ************************************************************************** */