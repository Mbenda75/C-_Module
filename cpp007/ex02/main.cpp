/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:46:12 by benmoham          #+#    #+#             */
/*   Updated: 2022/07/04 18:29:22 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750


int main(void)
{

	std::cout << "\e[0;32m========== Empty Array ==========\e[0m"<< std::endl;
	{
		Array<std::string> e;
		std::cout << "Empty Array Create" << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "\e[0;32m==========Multiple Array ==========\e[0m" << std::endl;
	{
		Array<std::string> array(3);

		array[0] = "Hello World";
		array[1] = "Lorem ipsum";
		array[2] = "Coucou";
		
		std::cout << "\e[0;32m========== String array ==========\e[0m" << std::endl;
		std::cout << "Size Array: " << array.size() << std::endl;
		for (int i = 0; i < array.size(); i++)
			std::cout << "array[" << i << "] = " << array[i] << std::endl;

		std::cout << "\e[0;32m========== Overflow test ==========\e[0m" << std::endl;
		try
		{
			std::cout << "array[5] = " << array[5];  
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " <<  e.what() << std::endl;
		}		
	}
} 

 /* int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}  */