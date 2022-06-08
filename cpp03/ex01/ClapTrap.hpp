/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:58:07 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 12:48:01 by benmoham         ###   ########.fr       */
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
		
		// Operators
		
		// Getters / Setters
		std::string getName() const;
		void setName(std::string Name);
		int getHitPoints() const;
		void setHitPoints(int HitPoints);
		int getEnergyPoints() const;
		void setEnergyPoints(int EnergyPoints);
		int getAttackDamage() const;
		void setAttackDamage(int AttackDamage);

		// Core
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		bool isAble();

	protected :	
		std::string _Name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;	
	private:

};

#endif