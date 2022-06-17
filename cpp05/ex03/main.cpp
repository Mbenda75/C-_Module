/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:19:45 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/17 15:02:40 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{

	/*----------------------INTERN WHO CAN CREATES FORM-----------------------*/
	{
		Intern someRandomIntern;
		Form* rrf;
		Form* two;
		Form* three;
		Intern	deux;
		Intern 	trois;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		two = deux.makeForm("shrubbery creation", "Benda");
		three  = trois.makeForm("presidential pardon", "Bendo");

		delete rrf;
		delete two;
		delete three;
		
	}

	/*------------------------INTERN WHO CAN'T CREATES FORMS---------------------*/
	{
		Intern someRandomIntern;
		Form* rrf;
		Form* two;
		Form* three;
		Intern	deux;
		Intern 	trois;
		rrf = someRandomIntern.makeForm("popo", "Benda");
		two = deux.makeForm("papa", "Bendo");
		three  = trois.makeForm("pipi", "Bendi");
	}

}