/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:54 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 18:46:05 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed():_result(0)
{
	std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout<< "Copy constructor called" << std::endl;
	_result = src._result;
	//*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout<< "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_result = rhs.getRawBits();
	}
	return *this;
}

 
/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(_result);
}

void	Fixed::setRawBits(int const raw)
{
	_result = raw;
}


/* ************************************************************************** */