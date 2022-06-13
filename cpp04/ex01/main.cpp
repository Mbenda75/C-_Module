/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:49:18 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/13 16:27:39 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *meta2[10];


	std::cout << " ------Tab of animals objects ------- " << std::endl;
	for (int i = 0; i < 5; i++)
		meta2[i] = new Dog();
	for (int i = 5; i < 10; i++)
		meta2[i] = new Cat();

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << "meta2[" << i << "] is a " << meta2[i]->getType() << std::endl;

	for (int i = 9; i >= 0; i--)
		delete meta2[i];
		
	std::cout << " -------copying ideas------ " << std::endl;

    Cat cat1;
  /*   Dog dog1;
	Dog dog2(dog1); */
	cat1.setIdea(0, "cat1 idea 1");
	cat1.setIdea(1, "cat1 idea 2");
	Cat cat2(cat1);
	cat2.setIdea(0, "cat2 idea 1");
	std::cout << "Idea cat1 : " << cat1.getIdea(0) << std::endl;
	std::cout << "Idea cat1 : " << cat1.getIdea(1) << std::endl;
	std::cout << "Idea cat2 : " << cat2.getIdea(0) << std::endl;
	std::cout << "Idea cat2 : " << cat2.getIdea(1) << std::endl;
	return (0);
}