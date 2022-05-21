/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:55:05 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/21 16:29:10 by benmoham         ###   ########.fr       */
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
		std::string getfirstname() const;
		void	Set_lastname(std::string s);
		std::string getlastname() const;
		void	Set_nickname(std::string s);
		std::string getnickname() const;
		void	Set_number(std::string s);
		std::string getnumber() const;
		void	Set_darksecret(std::string s);
		std::string getdarksecret() const;
		
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _number;
		std::string _darksecret;

};

#endif /* ********************************************************* CONTACT_H */