/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:59 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/25 20:17:02 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <cctype>

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


int Phonebook::ft_stoi(std::string str) const
{
	int i;
	int signe;
	int num;

	i = 0;
	signe = 1;
	num = 0;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * signe);
}

void	Phonebook::ADD() 
{
	Contact tmp;
 	std::string s;
	 
	std::cout << "Enter your first name : " ;
	if (!(std::getline(std::cin, s)))
		return ;
	if(std::cin.good() == 0)
		return  ; 
	if(s.length() != 0 && s.empty() == false)
	{
		tmp.setFirstname(s);
		_register++;
	}
	
	std::cout << "Enter your last name : ";
	if (!(std::getline(std::cin, s)))
		return ;
	if(std::cin.good() == 0)
		return  ; 
	if(s.length() != 0 && s.empty() == false)
	{
		tmp.setLastname(s);;
		_register++;
	}
	
	std::cout << "Enter your nickname : ";
	if (!(std::getline(std::cin, s)))
		return ;
	if(std::cin.good() == 0)
		return  ; 
	if(s.length() != 0 && s.empty() == false)
	{
		tmp.setNickname(s);
		_register++;
	}
	
	std::cout << "Enter your phone numer :";
	if (!(std::getline(std::cin, s)))
		return ;
	if(std::cin.good() == 0)
		return  ; 
	if(s.length() != 0 && s.empty() == false)
	{
		tmp.setNumber(s);
		_register++;
	}
	
	std::cout << "Enter your darkest secret :";
	if (!(std::getline(std::cin, s)))
		return ;
	if(std::cin.good() == 0)
		return  ; 
	if(s.length() != 0 && s.empty() == false)
	{
		tmp.setDarksecret(s);
		_register++;
	}

	if (_nb_contact > 7 && _register == 5)
	{		
		_contact[_save] = tmp;
		if (_nb_contact <= 7)
			_nb_contact++;
		else if(_nb_contact >= 7)
			_save++;
	}
	else if (_register == 5)
	{
		_contact[_nb_contact] = tmp;
		if (_nb_contact <= 7)
			_nb_contact++;
	}
	else if (_register < 5)
		std::cout << "One or more information is missing to add the contact" << std::endl;
	_register = 0;
}

void	Phonebook::SEARCH()
{
	int	i = 0;
	int nb = 0;
	std::string s;
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

	if ((std::cin >> s) && (s[0] >= '0' && s[0] < '8') && (s.length() == 1))
	{
		i = ft_stoi(s);
		if(std::cin.good() == 0)
			return  ;
		std::cout << "Firstname is : " << _contact[i].getFirstname() << std::endl;
		std::cout << "Lastname is : " <<_contact[i].getLastname() << std::endl;
		std::cout << "Nickname is : " <<_contact[i].getNickname() << std::endl;
		std::cout << "Number is : " <<_contact[i].getNumber() << std::endl;
		std::cout << "Darksecret is : " <<_contact[i].getDarksecret() << std::endl;
	}
	else
	{
	 	if(std::cin.good() == 0)
			return  ;
		std::cout << "Bad index " << std::endl;
	}
	std::cin.ignore(1, '\n');
	std::cin.clear();
}
