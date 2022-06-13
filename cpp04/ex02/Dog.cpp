/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:47:43 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/13 16:19:48 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "\e[0;33mConstructor called of Dog\e[0m" << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
	std::cout << "\e[0;33m CopyConstructor called of Dog\e[0m" << std::endl;
}
 

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete _brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "\e[0;32Operator= called of Dog\e[0m" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain();
	*this->_brain = *rhs._brain;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound() const
{
	std::cout << "Waaf Waaf\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Dog::setIdea(int index, std::string idea) 
{
	_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return _brain->getIdea(index);
}


/* ************************************************************************** */