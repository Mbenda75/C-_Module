/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:47:29 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/13 15:17:11 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
#include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		Dog &		operator=( Dog const & rhs );
		void setIdea(int index, std::string idea);
		std::string getIdea(int index)const ;
		void	makeSound() const;
		
	private :
		Brain *_brain;
};

#endif /* ************************************************************* DOG_H */