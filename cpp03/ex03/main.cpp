/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:58:54 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 11:58:57 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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


	{
		ScavTrap CT("FOO");

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

		CT.guardGate();
	}

	{
		FragTrap CT("FOO");

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

		CT.highFivesGuy();

	}
	return 0;
}

