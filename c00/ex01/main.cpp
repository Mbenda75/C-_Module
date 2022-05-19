/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:33:08 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/19 14:25:46 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

int main(void)
{
	Contact contact;
	Phonebook repertory;
	std::string s;
	int i = 0;
	i = 0;
	while(1)
	{
		std::cin >> s;
		
		if (s == "EXIT")
			exit(1);
 		if (s == "ADD" && i <= 8)
		{
			repertory.ADD();
			i++;
		}
		if (i == 8)
		{
			std::cout << "NB CONTACT == " << repertory.Get_nb_contact()<< std::endl;
			std::cout << i << std::endl;
			/*remplacer le dernier concact ajouter par le new*/
		}
		if (s == "SEARCH")
		{
			std::cout << "Enter the contact of the repertory" << std::endl;
			std::cin >> s;
			repertory.SEARCH(s);
		}
	}
}