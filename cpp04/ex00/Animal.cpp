/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:47:54 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/13 16:08:13 by benmoham         ###   ########.fr       */
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
	_type = src.getType();
	std::cout << "\e[0;31m Copy Constructor called of Animal\e[0m" << std::endl;
}
 

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "\e[0;31m Fields Constructor called of Animal\e[0m" << std::endl;
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