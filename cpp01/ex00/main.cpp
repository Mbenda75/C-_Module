/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:57:47 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/24 20:56:00 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie two("Benda");

	Zombie Dos;
	
	Zombie *tr = NULL;
   tr = newZombie("Tttt");
   delete tr;
   return (0);
}