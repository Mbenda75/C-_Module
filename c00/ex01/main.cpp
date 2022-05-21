/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:33:08 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 17:49:17 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <unistd.h>

int main(void)
{
	Contact contact;
	Phonebook repertory;
	std::string s;
	int nb = repertory.Get_nb_contact();
	
	std::cout << "Phonebook option : ADD | SEARCH | EXIT" << std::endl;
	
	while(getline(std::cin, s))
	{
		
		if (s == "ADD")
		{
			repertory.ADD();
			nb = repertory.Get_nb_contact();
			//std::cout << "the name is" << repertory._contact[0].Get_firstname() <<std::endl;
		}
		else if(s == "SEARCH")
			repertory.SEARCH();
		else if (s == "EXIT")
			exit(1);
		else
			std::cout << "Phonebook option : ADD | SEARCH | EXIT" << std::endl;
	}
}