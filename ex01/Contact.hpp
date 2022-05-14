/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:55:05 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/14 20:35:21 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{

	public:

		Contact(void);  //constructeur
		~Contact(void); //destructeur

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _number;
		std::string _darksecret;

};

#endif /* ********************************************************* CONTACT_H */