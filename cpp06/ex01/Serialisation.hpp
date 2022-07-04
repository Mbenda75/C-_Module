#ifndef SERIALISATION_HPP
# define SERIALISATION_HPP

# include <iostream>
# include <stdint.h>
# include <string>

struct Data {
std::string s;
};

class Serialisation
{

	public:

		Serialisation();
		Serialisation( Serialisation const & src );
		~Serialisation();

		Serialisation &		operator=( Serialisation const & rhs );
		uintptr_t		serialize(Data* ptr);
		uintptr_t		getRaw()const;
		Data				*deserialize(uintptr_t raw);

	private:
		uintptr_t 	_raw;
		Data 		*_data;
		Data		*_new_data;

};

#endif /* *************************************************** SERIALISATION_H */