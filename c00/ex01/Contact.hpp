/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:55:05 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/19 14:32:07 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
#include <iomanip> 

class Contact
{

	public:

		Contact(void);  //constructeur
		~Contact(void); //destructeur

		void	Set_firstname(std::string s);
		void	Set_lastname(std::string s);
		void	Set_nickname(std::string s);
		void	Set_number(std::string s);
		void	Set_darksecret(std::string s);
		void	Print(void);
		
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _number;
		std::string _darksecret;

};

#endif /* ********************************************************* CONTACT_H */