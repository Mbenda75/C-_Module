/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:17:27 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/26 13:43:24 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

	public:

		Zombie();
		Zombie(std::string name);
		~Zombie();

		std::string 	getName() const;
		void	setName(std::string s);
		void announce( void ) const;

	private:
		std::string _name;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif /* ****************************************************** ZOMBIE.CPP_H */