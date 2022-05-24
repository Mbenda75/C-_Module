/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:59 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/24 17:46:33 by benmoham         ###   ########.fr       */
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
	getline(std::cin, s);
	tmp.setFirstname(s);
	
	std::cout << "Enter your last name : ";
	getline(std::cin, s);
	tmp.setLastname(s);
	
	std::cout << "Enter your nickname : ";
	getline(std::cin, s);
	tmp.setNickname(s);
	
	std::cout << "Enter your phone numer :";
	getline(std::cin, s);
	tmp.setNumber(s);
	
	std::cout << "Enter your darkest secret :";
	getline(std::cin, s);
	tmp.setDarksecret(s);

	if (_nb_contact > 7)
	{		
		_contact[_save] = tmp;
		if (_nb_contact <= 7)
			_nb_contact++;
		else if(_nb_contact >= 7)
			_save++;
	}
	else{
		_contact[_nb_contact] = tmp;
		if (_nb_contact <= 7)
			_nb_contact++;
	}
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
		std::cout << "|" << std::setw(10) << nb;
		std::cout << "|" << std::setw(10) << truncate(_contact[nb].getFirstname());
		std::cout << "|" << std::setw(10) << truncate(_contact[nb].getLastname());
		std::cout << "|" << std::setw(10) << truncate(_contact[nb].getNickname());
		std::cout << "|" << std::endl;
		nb++;
	}
	std::cout << "Enter the index of the repertory" << std::endl;
	if ((std::cin >> i) && (i >= 0 && i <= 7) && (i < _nb_contact))
	{
		std::cout << "Firstname is : " << _contact[i].getFirstname() << std::endl;
		std::cout << "Lastname is : " <<_contact[i].getLastname() << std::endl;
		std::cout << "Nickname is : " <<_contact[i].getNickname() << std::endl;
		std::cout << "Number is : " <<_contact[i].getNumber() << std::endl;
		std::cout << "Darksecret is : " <<_contact[i].getDarksecret() << std::endl;
	}
	else
		std::cout << "Bad index " << std::endl;
	std::cin.clear();
	std::cin.ignore(512, '\n');
}
