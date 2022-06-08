/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:57:52 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 12:15:56 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		// Constructors
		ClapTrap();
		ClapTrap(std::string Name);
		
		// Destructor
		~ClapTrap();
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string Name);
		int getHitPoints() const;
		void setHitPoints(int HitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int EnergyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int AttackDamage);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool isAble();
		
	private:
		std::string _Name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;
		
};

#endif