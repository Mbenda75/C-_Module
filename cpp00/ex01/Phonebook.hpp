/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:52 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/25 20:16:20 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip> 
#include "Contact.hpp"
#include <cstring>

class Phonebook
{

	public:

		Phonebook();//constructeur
		~Phonebook();//destructeur
		
		void	ADD();
		void	SEARCH();
		int		ft_stoi(std::string str) const;
		
	private:
		Contact _contact[8];
		int		_nb_contact;
		int		_save;
		int		_register;
};

#endif /* ******************************************************* PHONEBOOK_H */