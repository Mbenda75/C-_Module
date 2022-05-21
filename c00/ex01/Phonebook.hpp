/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:52 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 17:26:32 by benmoham         ###   ########.fr       */
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

class Phonebook
{

	public:
		Contact _contact[8];

		Phonebook();//constructeur
		~Phonebook();//destructeur
		
		void	ADD();
		void	SEARCH();
		int		Get_nb_contact() const ;//Getteur permettant de recuperer les donnnes de ma variable privee
		
	private:
		int		_nb_contact;
};

#endif /* ******************************************************* PHONEBOOK_H */