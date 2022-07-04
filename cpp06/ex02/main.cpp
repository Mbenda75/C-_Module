/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:31:03 by benmoham          #+#    #+#             */
/*   Updated: 2022/07/04 13:40:24 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"

Base		*generate(void)
{
	int r = std::rand() % 3;

	if (r == 0)
	{
		std::cout << "Choix aleatoire = A\n";
		return (new A);
	}
	else if (r== 1)
	{
		std::cout << "Choix aleatoire = B\n";
		return (new B);
	}
	else if (r == 2)
	{
		std::cout << "Choix aleatoire = C\n";
		return (new C);
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Type adress: A\n";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Type adress: B\n";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Type adress: C\n";
	return ;
}

void identify(Base & p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "Type ref: A" << std::endl;
		(void)a;
	} catch (std::exception & e) {
		(void)e;
	}
	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "Type ref: B" << std::endl;
		(void)b;
	} catch (std::exception & e) {
		(void)e;
	}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Type ref : C" << std::endl;
	} catch (std::exception & e) {
		(void)e;
	}
}

int main(void)
{
	std::srand(time(NULL));
	Base *base = generate();
	std::cout << "----------------" << std::endl;
	identify(base);
	identify(*base);
	std::cout << "----------------" << std::endl;
	delete base;
	return (0);
}
