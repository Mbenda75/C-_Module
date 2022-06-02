/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:17:17 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/02 14:04:47 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string s1;
std::string s2;
size_t len_s1;
size_t len_s2;

std::string    my_replace(std::string line)
{
    std::string    replace;
    size_t pos = line.find(s1);
    
    while (pos != std::string::npos)
    {
        line.erase(pos, len_s1);
        line.insert(pos, s2);
        pos = line.find(s1, pos + len_s2);
    }
    return (line);
}

int main(int ac, char **av)
{
    std::string tmp;
    std::string tmp2;
    DIR *file;
    
    if (ac != 4)
    {
        std::cout << "Problem with program arguments " << std::endl;
        return (1);
    }
    s1 = av[2];
    s2 = av[3];
    len_s1 = s1.size();
    len_s2 = s2.size();
    std::ifstream ifs(av[1]);
    if (ifs.is_open() == false)
    {
        std::cout << "Problem with the file" << std::endl;
        return (1);   
    }
    
    std::string arg = av[1];
    std::string newfile = arg.append(".replace");
    std::ofstream ofs(newfile.c_str());
    
    while(getline(ifs,tmp))
    {
        tmp2= my_replace(tmp);
        ofs << tmp2 << std::endl;
    }
    ifs.close();
    ofs.close();
}  
