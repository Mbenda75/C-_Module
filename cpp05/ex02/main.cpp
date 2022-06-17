/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:19:45 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/17 14:54:06 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
        //--------------------Bureaucrat who can sign-------------------------------------
		Bureaucrat B4("B4", 26);
		ShrubberyCreationForm p3("p3");
		std::cout << "Signed lvl :145    Exec lvl : 137 "<< B4.getName() << " Grade : " << B4.getGrade() << std::endl;

		p3.BeSigned(B4);
		B4.signForm(p3);
		B4.executeForm(p3);

		Bureaucrat B1("B1", 45);
		RobotomyRequestForm robot("Robot");
        std::cout << "Signed lvl :72    Exec lvl : 45 " << B1.getName() << " Grade : " << B1.getGrade() << std::endl;

        robot.BeSigned(B1);
		B1.signForm(robot);
		B1.executeForm(robot);

		std::cout << std::endl;

		Bureaucrat President("President", 5);
		PresidentialPardonForm pp("pp"); 
        std::cout << "Signed lvl :25     Exec lvl : 5 "<< President.getName() << " Grade : " << President.getGrade() << std::endl;

        pp.BeSigned(President);
		President.signForm(pp);
		President.executeForm(pp);

         //--------------------Bureaucrat who can't sign-------------------------------------
        Bureaucrat B2("B2", 71);
		RobotomyRequestForm r2("r2");
         std::cout << "Signed lvl :72    Exec lvl : 45 " << B2.getName() << " Grade : " << B2.getGrade() << std::endl;
        r2.BeSigned(B2);
		B2.signForm(r2);
		B2.executeForm(r2);

		std::cout << std::endl;

		Bureaucrat B3("B3", 26);
		PresidentialPardonForm p2("p2");
        std::cout << "Signed lvl :25     Exec lvl : 5 "<< B3.getName() << " Grade : " << B3.getGrade() << std::endl;

        p2.BeSigned(B3);
		B3.signForm(p2);
		B3.executeForm(p2);


		Bureaucrat B5("B5", 145);
		ShrubberyCreationForm p4("p4");
        std::cout << "Signed lvl :145     Exec lvl : 137 "<< B5.getName() << " Grade : " << B5.getGrade() << std::endl;

        p4.BeSigned(B5);
		B5.signForm(p4);
		B5.executeForm(p4);
}