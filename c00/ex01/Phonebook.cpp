/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:59 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/19 15:02:48 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Phonebook::Phonebook() : _nb_contact(0)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Phonebook::~Phonebook()
{
	
}

/* print
{
	----------------------------------
	for(int i = 0; i < nb_contact; i++)
		_contact[i].show
	----------------------------------
} */
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Phonebook::Get_nb_contact()
{
	return(this->_nb_contact);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Phonebook::ADD(void) // preciser a quel classe appartient la ft
{
	Contact tmp;
 	std::string s;
	
	std::cout << "Enter your first name : " ;
	std::cin >> s ;
	tmp.Set_firstname(s);
	
	std::cout << "Enter your last name : ";
	std::cin >> s;
	tmp.Set_lastname(s);
	
	std::cout << "Enter your nickname : ";
	std::cin >> s;
	tmp.Set_nickname(s);
	
	std::cout << "Enter your phone numer :";
	std::cin >> s;
	tmp.Set_number(s);
	std::cout << "Enter your darkest secret :";
	std::cin >> s;
	tmp.Set_darksecret(s);
	 
	this->_contact[_nb_contact] = tmp;
	this->_nb_contact++;
	return ;
}

void	Phonebook::SEARCH(std::string s)
{
	std::cout << "THe contact is " << s << std::endl;
	//std::cout << std::setfill ('.') << std::setw (10);
	//std::cout << 10 << std::endl; == .......10
	return ;
}
