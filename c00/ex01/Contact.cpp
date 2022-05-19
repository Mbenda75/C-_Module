/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:44 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/19 15:04:47 by benmoham         ###   ########.fr       */
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

void	Contact::Set_firstname(std::string s)
{
	_firstname = s;
	return ;
}

void	Contact::Set_lastname(std::string s)
{
	_lastname = s;
	return ;
}

void	Contact::Set_nickname(std::string s)
{
	_nickname = s;
	return ;
}

void	Contact::Set_number(std::string s)
{
	_number = s;
	return ;
}

void	Contact::Set_darksecret(std::string s)
{
	std::string tmp;
	
	_darksecret = s;
	std::cout << "you want to show it ? " << std::endl;
	std::cin >> tmp;
	if (tmp == "yes")
		std::cout << "_Darksecret is " << _darksecret << std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* void	Contact::Print()
{
	"| " name | dfss | vfdsgf | id | endl | darkestseccret
} 
 */
	