/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:05:49 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/31 13:37:23 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main()
{
   std::string s = "HI THIS IS BRAIN";

   std::cout << "• The memory address of the string variable is : " << &s<< std::endl;


   std::string *stringPTR =  &s;

    std::cout << "• The memory address held by stringPTR is : " << &(*stringPTR) << std::endl;

   std::string &stringREF = s;

    std::cout << "• The memory address held by stringREF is " << &stringREF << std::endl;
    
    std::cout << "• The value of the string variable is " << s << std::endl;

    std::cout << "• The value pointed to by stringPTR is " << *(stringPTR) << std::endl;
   
    std::cout << "• The value pointed to by stringREF is " << stringREF  << std::endl;
   
}
