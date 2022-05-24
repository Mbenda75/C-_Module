/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:44 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/24 17:31:04 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact(void)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Contact::~Contact(void)
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string 	Contact::getFirstname() const
{
	return(this->_firstname);
}
std::string 	Contact::getLastname() const
{
	return(this->_lastname);
}
std::string 	Contact::getNickname() const
{
	return(this->_nickname);
}
std::string 	Contact::getNumber() const
{
	return(this->_number);
}
std::string 	Contact::getDarksecret() const
{
	return(this->_darksecret);
}


void	Contact::setFirstname(std::string s)
{
	_firstname = s;
}

void	Contact::setLastname(std::string s)
{
	_lastname = s;
}

void	Contact::setNickname(std::string s)
{
	_nickname = s;
}

void	Contact::setNumber(std::string s)
{
	_number = s;
}

void	Contact::setDarksecret(std::string s)
{
	_darksecret = s;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	