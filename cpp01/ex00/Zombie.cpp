/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:12:58 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/24 20:49:00 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
	setName("Monster");
    announce();
}

Zombie::Zombie(std::string name)
{
	setName(name);
    announce();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout << _name << " is dead" << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string 	Zombie::getName() const
{
	return(this->_name);
}

void	Zombie::setName(std::string s)
{
	_name = s;
}

/* ************************************************************************** */