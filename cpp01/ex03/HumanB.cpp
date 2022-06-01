/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:27:53 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/31 16:14:32 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB()
{
	_weapon = NULL;
}

HumanB::HumanB(std::string s):_name(s)
{
	std::cout << "HumanB is create " << std::endl;
	_weapon = NULL;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
		std::cout << "HumanB is destroy " << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void    HumanB::attack()
{
	if (_weapon != NULL)
    	std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
	else
		std::cout << "The name of the weapon is not set " << std::endl;
} 


 void	HumanB::setWeapon(Weapon & weapon)
{
	_weapon = &weapon;
}
 
/* ************************************************************************** */