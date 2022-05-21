/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:59 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 19:48:07 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Phonebook::Phonebook() : _nb_contact(0), _save(0)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Phonebook::~Phonebook()
{
	
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	truncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	Phonebook::ADD() // preciser a quel classe appartient la ft
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
	 
	if (_nb_contact >= 8)
	{		
		_contact[_save] = tmp;
		if (_nb_contact < 8)
			_nb_contact++;
		else if(_nb_contact >= 8)
			_save++;
	}
	else{
		_contact[_nb_contact] = tmp;
		if (_nb_contact < 8)
			_nb_contact++;
	}
	std::cin.clear();
	std::cin.ignore(512, '\n');
}

void	Phonebook::SEARCH()
{
	int	i = 0;
	int nb = 0;
	if (_nb_contact == 0)
	{
		std::cout << "No contact was added " << std::endl;
		return ;
	}
	while (nb < _nb_contact )
	{
		std::cout << "|" << std::setw(10) << nb + 1;
		std::cout << "|" << std::setw(10) << truncate(_contact[nb].getfirstname());
		std::cout << "|" << std::setw(10) << truncate(_contact[nb].getlastname());
		std::cout << "|" << std::setw(10) << truncate(_contact[nb].getnickname());
		std::cout << "|" << std::endl;
		nb++;
	}
	std::cout << "Enter the index of the repertory" << std::endl;
	if ((std::cin >> i) && (i >= 0 && i < 8) && (i < _nb_contact))
	{
		std::cout << "Firstname is : " << _contact[i].getfirstname() << std::endl;
		std::cout << "Lastname is : " <<_contact[i].getlastname() << std::endl;
		std::cout << "Nickname is : " <<_contact[i].getnickname() << std::endl;
	}
	else
		std::cout << "Bad index " << std::endl;
	std::cin.clear();
	std::cin.ignore(512, '\n');
}
