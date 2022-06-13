#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &			operator=( Brain const & rhs );
		void setIdea(int index, std::string idea);
		std::string getIdea(int index)const ;

	private:
		std::string _Ideas[100];

};

#endif /* *********************************************************** BRAIN_H */