#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array {
	
	public:
		Array<T> (void)
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			this->_array = NULL;
			this->_size = 0;
		}

		Array<T>(const unsigned int size)
		{
			std::cout << "\e[0;33mFields Constructor called of Array\e[0m" << std::endl;
			this->_array = new T[size];
			this->_size = size;
		}

		Array<T>(Array<T> & cpy)
		{
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
			*this = cpy;
			return ;
		}	

		Array<T> & operator=(Array<T> & rhs)
		{
			std::cout << "\e[0;32mOperator equal called of Arrat\e[0m" << std::endl;
			if (this == &rhs)
				return *this;
			this->_size = rhs.size();
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs[i];	
			return *this;
		}

		T & operator[](unsigned int index) const
		{
			if (!this->_size || index >= this->_size)
				throw std::out_of_range("Out of range");
			return this->_array[index];
		}
		
		~Array<T>(void)
		{
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
			delete [] this->_array;
			return;
		}

		int		size(void) const
		{
			return this->_size;
		}

	private:
		unsigned int	_size;
		T *_array;

};

#endif /* *********************************************************** ARRAY_H */