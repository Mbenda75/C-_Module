#include "Zombie.hpp"

/*
** --------------------------------- METHODS ----------------------------------
*/

Zombie* newZombie( std::string name )
{
    Zombie *ret = new Zombie(name);
    // ret->setName(name);
    // ret->announce();
    return (ret);
}
// It creates a zombie, name it, and return it so you can use it outside of the function
// scope.


/* ************************************************************************** */