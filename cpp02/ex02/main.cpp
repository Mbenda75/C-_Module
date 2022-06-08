/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:57:50 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 11:41:25 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ));
    
    std::cout << "a   = " << a << std::endl;
     
    std::cout << "++a = " << ++a << std::endl;
    
    std::cout << "a   = " << a << std::endl;
    
    std::cout << "a++ = " << a++ << std::endl;
    
   std::cout <<  "a   = "<< a << std::endl;
    
    std::cout << "b   = " << b << std::endl;
    
   std::cout << "max = " << Fixed::max(a, b) << std::endl; 
/*  

	Fixed c(10);
	Fixed d(15);
	Fixed e(10);
	Fixed f(2);
	if (c != d)
		std::cout << "!= OK " << std::endl;
	if (c < d)
		std::cout << "< OK " << std::endl;
	if (d > c)
		std::cout << "> OK " << std::endl;
	if (c == e)
		std::cout << "== OK " << std::endl;
	if ((c * e) == 100)
		std::cout << "* OK " << std::endl;
	if ((c + e) == 20)
		std::cout << "+ OK " << std::endl;
	if ((c / f) == 5)
		std::cout << "/ OK " << std::endl; 
    if ((c - e) == 0)
        std::cout << "- OK " << std::endl; 
    */
    return 0;
}