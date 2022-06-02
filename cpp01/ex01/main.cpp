/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:05:49 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/02 13:27:48 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie *Horde;
    
    if (ac != 2)
    {
        std::cout << "Problem with program arguments " << std::endl;
        return(1);
    }
    Horde = zombieHorde(5, av[1]);
    delete []Horde;
}