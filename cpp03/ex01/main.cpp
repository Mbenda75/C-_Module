
#include "ScavTrap.hpp"


int	main(void)
{
	{
		ClapTrap CT("FOO");

		std::cout << CT.getEnergyPoints() << std::endl;
		CT.attack("BAR");
		std::cout << CT.getEnergyPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.takeDamage(6);
		std::cout << CT.getHitPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.beRepaired(6);
		std::cout << CT.getHitPoints() << std::endl;
	}


	{
		ScavTrap CT("FOO");

		std::cout << CT.getEnergyPoints() << std::endl;
		CT.attack("BAR");
		std::cout << CT.getEnergyPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.takeDamage(6);
		std::cout << CT.getHitPoints() << std::endl;
		std::cout << std::endl;

		std::cout << CT.getHitPoints() << std::endl;
		CT.beRepaired(6);
		std::cout << CT.getHitPoints() << std::endl;

		CT.guardGate();
	}
	

	return 0;
}

