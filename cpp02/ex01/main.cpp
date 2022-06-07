/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:57:50 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 19:16:15 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    std::cout << "-------------CONSTRUCTOR CALLED--------------- " << std::endl;
    
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    
    a = Fixed( 1234.4321f );
    
     std::cout << "--------------CONVERT TO FLOAT---------------- " << std::endl;

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "--------------CONVERT TO INT---------------- " << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl; 
    
    std::cout << "--------------DESTUCTOR CALLED ---------------- " << std::endl;
    return 0;
}