/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:05:39 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/30 17:00:56 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** --------------------------------- METHODS ----------------------------------
*/

Zombie* zombieHorde(int n, std::string name)
{
    Zombie tmp;
    Zombie *Horde = new Zombie[n];
    
    for(int i = 0; i < n;i++)
    {
        Horde[i].setName(name);
        Horde[i].getName();
        Horde[i].announce();
    }
    return (Horde);
}
