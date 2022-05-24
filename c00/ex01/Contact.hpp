/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:55:05 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/24 16:48:02 by benmoham         ###   ########.fr       */
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

		void	setFirstname(std::string s);
		std::string getFirstname() const;
		void	setLastname(std::string s);
		std::string getLastname() const;
		void	setNickname(std::string s);
		std::string getNickname() const;
		void	setNumber(std::string s);
		std::string getNumber() const;
		void	setDarksecret(std::string s);
		std::string getDarksecret() const;
		
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _number;
		std::string _darksecret;

};

#endif /* ********************************************************* CONTACT_H */