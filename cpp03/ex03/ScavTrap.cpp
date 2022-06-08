/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:58:59 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 12:59:45 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors
ScavTrap::ScavTrap()
{
	_Name = "DefaultScavTrapName";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "\e[0;33mDefault Constructor called of ScavTrap\e[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string Name)
{
	_Name = Name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "\e[0;33mFields Constructor called of ScavTrap\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!isAble()) return;
	--_EnergyPoints;

	std::cout << "ScavTrap " << getName() << " is attacking " << target;
	std::cout << ", causing " << getAttackDamage() << " damage.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mDestructor called of ScavTrap\e[0m" << std::endl;
}


void ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap]: " << "activate mode Gate Keeper" << std::endl;
}

