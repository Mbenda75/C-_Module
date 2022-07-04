/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:31:59 by benmoham          #+#    #+#             */
/*   Updated: 2022/07/04 17:59:05 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	char				array[] = "TEST";
	std::string			tab[3] = {"Un", "Super", "Test"};
	float				 tab2[5] = {0.1f, 1.1f, 2.2f, 3.3f, 4.4f};
	int					tab3[3] = {0, 1, 2};
	char				*tab4 = NULL;

	std::cout << "\e[0;32m---> tableau char <---\e[0m" << std::endl;
	iter(array, strlen(array), print);

	std::cout << "\e[0;32m---> tableau char len = 2 <---\e[0m" << std::endl;
	iter(array, 2, print);

	std::cout << "\e[0;32m---> tableau de string <---\e[0m" << std::endl;
	iter(tab, 3, print);

	std::cout << "\e[0;32m---> tableau int <---\e[0m" << std::endl;
	iter(tab3, 3, print);

	std::cout << "\e[0;32m---> tableau float <---\e[0m" << std::endl;
	iter(tab2, 5, print);

	std::cout << "\e[0;32m---> pointeur NULL <---\e[0m" << std::endl;
	iter(tab4, 3, print);
	return 0;
}
