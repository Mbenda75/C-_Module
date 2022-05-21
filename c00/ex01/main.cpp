/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:33:08 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 19:44:54 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(void)
{
	Contact contact;
	Phonebook repertory;
	std::string s;
	
	while(1)
	{
		std::cout << "Phonebook option : ADD | SEARCH | EXIT" << std::endl;
		if (!(std::getline(std::cin, s)))
			break ;
		if (s == "ADD")
			repertory.ADD();
		else if(s == "SEARCH")
			repertory.SEARCH();
		else if (s == "EXIT")
			return (1);
	}
}