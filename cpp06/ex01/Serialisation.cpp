#include "Serialisation.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialisation::Serialisation()
{
	std::cout << "\e[0;33mDeufault Constructor called of Serialisation\e[0m" << std::endl;
	_data = new Data;

	_data->s = "Message from my Data struct";
	std::cout << "Str: " << _data->s << std::endl;
	

	_raw = serialize(_data);
	_new_data = deserialize(_raw);

	std::cout  << _data << std::endl;
	std::cout << _new_data  << std::endl;
	
	std::cout << "Str: " << _new_data->s << std::endl;
}

Serialisation::Serialisation( const Serialisation & src )
{
	std::cout << "\e[0;33mCopy Constructor called of Serialisation\e[0m" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialisation::~Serialisation()
{
	std::cout << "\e[0;31mDestructor called of Serialisation\e[0m" << std::endl;
	delete _data;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialisation &				Serialisation::operator=( Serialisation const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t		Serialisation::serialize(Data* ptr)
{
	uintptr_t type = reinterpret_cast<uintptr_t>(ptr);
	return (type);
}

Data			*Serialisation::deserialize(uintptr_t raw)
{
	_data = reinterpret_cast<Data *>(raw);
	return (_data);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */