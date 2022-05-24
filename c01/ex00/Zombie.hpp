/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:17:27 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/24 16:50:50 by benmoham         ###   ########.fr       */
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

		void announce( void );
		std::string 	getName() const;
		void	setName(std::string s);
		Zombie* newZombie( std::string name );
		
	private:

		std::string _name;

};

#endif /* ****************************************************** ZOMBIE.CPP_H */