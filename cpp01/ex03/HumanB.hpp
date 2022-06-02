/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:28:09 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/02 13:44:00 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
#include "Weapon.hpp"

class HumanB
{

	public:

		HumanB();
		HumanB(std::string s);
		~HumanB();
		
		void			attack();
		void			setWeapon(Weapon & weapon);
		
	private:
		Weapon *_weapon;
		std::string _name;

};


#endif /* ********************************************************** HUMANB_H */