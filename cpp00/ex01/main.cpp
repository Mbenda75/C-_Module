/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 20:33:08 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/25 20:30:43 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int main(int ac, char **av)
{
	Contact contact;
	Phonebook repertory;
	std::string s;
	(void)av;
	if (ac > 1)
		return(1);
	while(1)
	{
		if (!std::cin.good())
			break ;
		if (s.size())
			std::cout << "s = " << s << '\n';
		std::cout << "Phonebook option : ADD | SEARCH | EXIT" << std::endl;
		if (!(std::getline(std::cin, s)))
			break ;	
		if (s == "ADD")
			repertory.ADD();
		else if(s == "SEARCH")
			repertory.SEARCH();
		else if (s == "EXIT")
		{
			std::cout << "Bye bye " << std::endl;
			return (0);
		}
		s.clear();
	}
}