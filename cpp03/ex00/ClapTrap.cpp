/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:57:42 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 12:25:38 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_Name = "DefaultClapTrapName";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "\e[0;33mDefault Constructor called of ClapTrap\e[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
	_Name = Name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
	std::cout << "\e[0;33mFields Constructor called of ClapTrap\e[0m" << std::endl;
}


// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mDestructor called of ClapTrap\e[0m" << std::endl;
}

// Getters / Setters
std::string ClapTrap::getName() const
{
	return _Name;
}
void ClapTrap::setName(std::string Name)
{
	_Name = Name;
}

int ClapTrap::getHitPoints() const
{
	return _HitPoints;
}
void ClapTrap::setHitPoints(int HitPoints)
{
	_HitPoints = HitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return _EnergyPoints;
}
void ClapTrap::setEnergyPoints(int EnergyPoints)
{
	_EnergyPoints = EnergyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return _AttackDamage;
}
void ClapTrap::setAttackDamage(int AttackDamage)
{
	_AttackDamage = AttackDamage;
}

// Core
void ClapTrap::attack(const std::string& target)
{
	if (!isAble()) return;
	--_EnergyPoints;

	std::cout << "ClapTrap " << getName() << " is attacking " << target;
	std::cout << ", causing " << getAttackDamage() << " damage.\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_HitPoints -= amount;

    std::cout << "ClapTrap " << getName() << " took " << amount << " damage.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!isAble()) return;
	--_EnergyPoints;
	_HitPoints += amount;

	std::cout << "ClapTrap " << getName() << " is reparing! ";
	std::cout << amount << " hit points recovered.\n";
}

bool ClapTrap::isAble()
{
	return (getHitPoints() > 0 && getEnergyPoints() > 0);
}
