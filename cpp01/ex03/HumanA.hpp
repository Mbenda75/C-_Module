/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:28:04 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/31 15:15:02 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{

	public:

		HumanA();
		HumanA(std::string s, Weapon & weapon);
		~HumanA();
		
		void			attack();

	private:
		std::string _name;
		Weapon _weapon;

};


#endif /* ********************************************************** HUMANA_H */