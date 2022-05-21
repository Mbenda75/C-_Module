/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:52 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 19:40:44 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <iomanip> 
#include "Contact.hpp"
#include <cstring>
#include <unistd.h>
#include <stdlib.h>

class Phonebook
{

	public:
		Contact _contact[8];

		Phonebook();//constructeur
		~Phonebook();//destructeur
		
		void	ADD();
		void	SEARCH();
		
	private:
		int		_nb_contact;
		int		_save;
};

#endif /* ******************************************************* PHONEBOOK_H */