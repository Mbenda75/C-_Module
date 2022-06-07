/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:54 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 20:38:20 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed():_result(0)
{
	//std::cout<< "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	//std::cout<< "Copy constructor called" << std::endl;
	_result = src._result;
}

Fixed::Fixed( int const nb)
{
	//std::cout << "Int constructor called" << std::endl;
	_result = nb  << _RawBits;
}

Fixed::Fixed( float const nb)
{
	//std::cout << "Float constructor called" << std::endl;
	_result = roundf(nb * std::pow(2, _RawBits));
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
//	std::cout<< "Copy assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_result = rhs.getRawBits();
	}
	return *this;
}


std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}


//		comparaison operator

bool	Fixed::operator>( Fixed const & rhs) 
{
	return (this->_result > rhs._result);
}

bool	Fixed::operator<( Fixed const & rhs) 
{
	return (this->_result < rhs._result);
}

bool	Fixed::operator>=( Fixed const & rhs) 
{
	return (this->_result >= rhs._result);
}

bool	Fixed::operator<=( Fixed const & rhs) 
{
	return (this->_result <= rhs._result);
}

bool	Fixed::operator==( Fixed const & rhs)
{
	return (this->_result == rhs._result);
}

bool	Fixed::operator!=( Fixed const & rhs) 
{
	return (!(this->_result == rhs._result));
}

//		arithmetic operators

Fixed	Fixed::operator+( Fixed const & rhs) 
{
	Fixed dst;

	dst.setRawBits(this->_result + rhs._result);
	return (dst);
}

Fixed	Fixed::operator*( Fixed const & rhs) 
{
	Fixed dst;

	dst.setRawBits((this->_result * rhs._result) >> this->_RawBits);
	return (dst);
}

Fixed	Fixed::operator-( Fixed const & rhs) 
{
	Fixed dst;

	dst.setRawBits(this->_result - rhs._result);
	return (dst);
}

Fixed	Fixed::operator/( Fixed const & rhs) 
{
	Fixed dst(this->toFloat() / rhs.toFloat());
	return (dst);
}

//	increment and decrement operators

Fixed	Fixed::operator++(int) 
{
	Fixed copy = *this;

	this->operator++();
	return (copy);
}

Fixed	Fixed::operator--(int) 
{
	Fixed copy = *this;

	this->operator--();
	return (copy);
}


Fixed	&Fixed::operator++(void)
{
	this->_result++;
	return (*this);
}

Fixed	&Fixed::operator--(void) 
{
	this->_result--;
	return (*this);
}
 
/*
** --------------------------------- METHODS ----------------------------------
*/

float		Fixed::toFloat( void ) const
{
	float res = std::pow(2, _RawBits);
	return (float)(_result / res);
}


int			Fixed::toInt( void ) const
{
	return(_result >> _RawBits);
}

Fixed const	&Fixed::min(Fixed const &nb1, Fixed const &nb2) 
{
	if (nb1._result > nb2._result)
		return (nb2);
	return (nb1);
}

Fixed const	&Fixed::max(Fixed const &nb1, Fixed const &nb2) 
{
	if (nb1._result < nb2._result)
		return (nb2);
	return (nb1);
}

Fixed	&Fixed::min(Fixed &nb1, Fixed &nb2) 
{
	if (nb1._result > nb2._result)
		return (nb2);
	return (nb1);
}

Fixed	&Fixed::max(Fixed &nb1, Fixed &nb2) 
{
	if (nb1._result < nb2._result)
		return (nb2);
	return (nb1);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits() const
{
	return(_result);
}

void	Fixed::setRawBits(int const raw)
{
	_result = raw;
}


/* ************************************************************************** */