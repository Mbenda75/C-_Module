/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:04:41 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/30 16:58:40 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie();
		~Zombie();

		std::string 	getName() const;
		void			setName(std::string s);
		void			announce(void) const;
	private:
		std::string _name;
};

Zombie* zombieHorde( int n, std::string name );

#endif /* ********************************************************** ZOMBIE_H */