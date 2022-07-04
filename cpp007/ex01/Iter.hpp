#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <cstring>

template <typename T>
void	iter(T *tab, int size, void (*pt)(T const & param))
{
	int i = 0;
	if (!tab)
	{
		std::cout << "(NULL)\n";
		return ;
	}

	while (i < size)
	{
		(*pt)(tab[i]);
		i++;
	}
	return ;
}

template<typename T>
void	print(T const & param)
{
	std::cout << "\e[0;33mValue is : \e[0m" << param << std::endl;
	return ;
}

#endif /* ************************************************************ ITER_H */