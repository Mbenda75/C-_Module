/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:28:20 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/31 14:43:08 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon();
		Weapon(std::string name);
		~Weapon();

		std::string 	getType() const;
		void	setType(std::string s);

		
	private:
		std::string _type;

};


#endif /* ********************************************************** WEAPON_H */