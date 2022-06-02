/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:50:45 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/02 15:23:28 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl lvl;   
    std::string level;
    std::string tmp;

    if (ac != 2)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    tmp = av[1];    
	if (ac == 2 && (tmp == "DEBUG" || tmp == "INFO" || tmp == "WARNING" || tmp == "ERROR" ))
	{
		level = tmp;
		lvl.complain(level);
	}
    else
        std::cout << "You have to define the right level of error or the right arg" << std::endl;
}