/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:54:52 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/19 14:26:13 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <iomanip> 
#include "Contact.hpp"

class Phonebook
{

	public:

		Phonebook();//constructeur
		~Phonebook();//destructeur

		void	ADD(void);
		void	SEARCH(std::string s);
		int		Get_nb_contact(); //Getteur permettant de recuperer les donnnes de ma variable privee
		
	private:
		int		_nb_contact;
		Contact _contact[8];
};

#endif /* ******************************************************* PHONEBOOK_H */