/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:27:49 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 12:27:51 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap CT("FOO");

		std::cout << CT.getEnergyPoints() << std::endl;
		CT.attack("BAR");
		std::cout << CT.getEnergyPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.takeDamage(6);
		std::cout << CT.getHitPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.beRepaired(6);
		std::cout << CT.getHitPoints() << std::endl;
	}

	return 0;
}

