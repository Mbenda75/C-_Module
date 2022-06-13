/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:47:47 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/13 15:56:30 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		Animal(std::string type);
		virtual ~Animal();

		Animal &		operator=( Animal const & rhs );
		std::string	getType() const;
		virtual void		makeSound()const;
		
	protected:
		std::string _type;
};


#endif /* ********************************************************** ANIMAL_H */