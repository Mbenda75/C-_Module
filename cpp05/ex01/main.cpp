/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:19:45 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/16 15:46:55 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat a; // _name("Mo"), _grade (2)
	Bureaucrat	c("Daddy", 149);
    Form F; // _signedGrade(2), _execGrade(2), _signed(false)
    Form g("Form 2", 149, 149, false);
    
    std::cout << "\e[0;32mThe form is signed here\e[0m" << std::endl;
    F.BeSigned(a);
    a.signForm(F);
    g.BeSigned(c);
    c.signForm(g);
    
    std::cout << "\e[0;32mOperator to ostream from Bureaucrat Class\e[0m" << std::endl;
    std::cout << F << std::endl;

    Bureaucrat one; // _name("Mo"), _grade (2)
	Bureaucrat	two("Daddy2", 14);
    Form f2; // _signedGrade(2), _execGrade(2), _signed(false)
    Form g2("Form 2", 13, 14, false);

    std::cout << "\e[0;32mThe form is not signed here so we got an exeption\e[0m" << std::endl;
    one.Decr();
    f2.BeSigned(one);
    one.signForm(f2);
    g2.BeSigned(two);
    two.signForm(g2);
    std::cout << "\e[0;32mOperator to ostream from Bureaucrat Class\e[0m" << std::endl;
    std::cout << f2 << std::endl;

}