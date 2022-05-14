/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:42:57 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/14 19:54:14 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;
	
	std::string s;
	i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(av[i])
	{
		j = 0;
		while(av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z' )
			{
				s = toupper(av[i][j]);
				std::cout << s;
			}
			else
				std::cout << s;
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
	
}