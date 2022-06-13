/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:47:54 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/13 16:16:46 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "\e[0;33mDefault Constructor called of Animal\e[0m" << std::endl;
}

Animal::Animal( const Animal & src )
{
	*this = src;
	std::cout << "\e[0;33m Copy Constructor called of Animal\e[0m" << std::endl;
}
 

Animal::Animal(std::string type)
{
	_type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "\e[0;31mDestructor called of Animal\e[0m" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "\e[0;32mOperator= called of Animal\e[0m" << std::endl;
	_type = rhs._type;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound() const
{
	std::cout << "Animal sound\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Animal::getType() const
{
	return(_type);
}

/* ************************************************************************** */