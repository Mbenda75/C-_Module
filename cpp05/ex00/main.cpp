/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:19:45 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/16 15:41:33 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a; // Mo -  Grade 2
	Bureaucrat	c("Daddy", 149);

    //Bureaucrat b(c); //Copy de Bureaucrat a 
    //std::cout << b.getName() << " have grade " << b.getGrade() << std::endl;
    std::cout << a.getName() << " have grade " << a.getGrade() << std::endl;
	std::cout << c.getName() << " have grade " << c.getGrade() << std::endl;
    std::cout << "\e[0;32mOperator to ostream from Bureaucrat Class\e[0m" << std::endl;
    std::cout << a << std::endl;
	std::cout << c << std::endl;
    a.Inc();
    //a.Inc();
	//c.Decr();
    c.Decr();
    std::cout << "\e[0;32mAfter INC / DECR \e[0m" << std::endl;
    std::cout << a.getName() << " have grade " << a.getGrade() << std::endl;
	std::cout << c.getName() << " have grade " << c.getGrade() << std::endl;
}