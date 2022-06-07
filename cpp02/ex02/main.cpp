/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:57:50 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 20:39:00 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ));
    
    std::cout << a << std::endl;
     
    std::cout << ++a << std::endl;
    
   /* std::cout << a << std::endl;
    
    std::cout << a++ << std::endl;
    
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max(a, b) << std::endl; */
    return 0;
}