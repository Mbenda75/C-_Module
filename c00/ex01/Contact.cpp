/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:44 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 16:55:42 by benmoham         ###   ########.fr       */
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

std::string 	Contact::getfirstname() const
{
	return(this->_firstname);
}
std::string 	Contact::getlastname() const
{
	return(this->_lastname);
}
std::string 	Contact::getnickname() const
{
	return(this->_nickname);
}
std::string 	Contact::getnumber() const
{
	return(this->_number);
}
std::string 	Contact::getdarksecret() const
{
	return(this->_darksecret);
}


void	Contact::Set_firstname(std::string s)
{
	_firstname = s;
}

void	Contact::Set_lastname(std::string s)
{
	_lastname = s;
}

void	Contact::Set_nickname(std::string s)
{
	_nickname = s;
}

void	Contact::Set_number(std::string s)
{
	_number = s;
}

void	Contact::Set_darksecret(std::string s)
{
	_darksecret = s;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

	