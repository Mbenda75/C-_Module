/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 12:35:15 by benmoham          #+#    #+#             */
/*   Updated: 2022/07/04 12:14:45 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number arg" << std::endl;
        return (1);
    }

    Conversion conv(av[1]);
    
	conv.aff_Char();
	conv.aff_Int();
	conv.aff_Float();
	conv.aff_Double();
}
