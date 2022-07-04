/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:00:29 by benmoham          #+#    #+#             */
/*   Updated: 2022/07/04 18:06:31 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Whatever.hpp"


int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "\e[0;32ma = " << a << ", b = " << b << "\e[0m" << std::endl;
    std::cout << "\e[0;31mmin( a, b ) = " << ::min( a, b )<< "\e[0m" << std::endl;
    std::cout << "\e[0;33mmax( a, b ) = " << ::max( a, b )<< "\e[0m" << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "\e[0;32mc = " << c << ", d = " << d << "\e[0m" << std::endl;
    std::cout << "\e[0;31mmin( c, d ) = " << ::min( c, d ) << "\e[0m" << std::endl;
    std::cout << "\e[0;33mmax( c, d ) = " << ::max( c, d ) << "\e[0m"<< std::endl;
    return 0;
}