/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:19:45 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/14 18:43:11 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a;
	Bureaucrat	c("Daddy", 150);

    //Bureaucrat b(c);
    //std::cout << b.getName() << " have grade " << b.getGrade() << std::endl;
    std::cout << a.getName() << " have grade " << a.getGrade() << std::endl;
	std::cout << c.getName() << " have grade " << c.getGrade() << std::endl;
    a.Inc();
	c.Decr();
}