#include "Conversion.hpp"

Conversion::Conversion(char const *input)
{
	std::string inputs(input);
	int pos = inputs.find(".") + 1;
	int i = pos;
	
	while(input[i] && isdigit(input[i]))
		i++;
	this->_precision = i - pos;
	
	if (strlen(input) == 1 && isascii(input[0]) && !isdigit(input[0]))
		this->_conv = input[0];
	else
		this->_conv = atof(input);
	std::cout << "\e[0;33mDefault Constructor called of Conversion\e[0m" << std::endl;
	return ;
}

Conversion::Conversion(Conversion & cpy)
{
	std::cout << "\e[0;33mCopy Constructor called of Conversion\e[0m" << std::endl;;
	this->_conv = cpy._conv;
	this->_precision = cpy._precision;
	*this = cpy;
	return ;
}

Conversion & Conversion::operator=(Conversion const & rhs)
{
	(void)rhs;
	return *this;
}

Conversion::~Conversion(void)
{
	std::cout << "\e[0;31mDestructor called of Conversion\e[0m" << std::endl;;
	return ;
}

int		Conversion::int_Conversion(void) const
{
	if(isnan(this->_conv) || isinf(this->_conv) || 
		this->_conv < static_cast<double>(-2147483648) || 
		this->_conv > static_cast<double>(+2147483647) )
		throw Conversion::Invalid();
	return static_cast<int>(this->_conv);
}

char 	Conversion::char_Conversion(void) const
{
	if(isnan(this->_conv) || isinf(this->_conv) || 
		this->_conv < static_cast<double>(INT_MIN) ||
		this->_conv > static_cast<double>(INT_MAX) || !isascii(this->_conv))
		throw Conversion::Invalid();
	if (!std::isprint(this->_conv))
		throw Conversion::NotDisplayable();
	return(static_cast<char>(this->_conv));
}

float	Conversion::float_Conversion(void) const
{
	return static_cast<float>(this->_conv);
}

double	Conversion::double_Conversion(void) const
{
	return this->_conv;
}

int	Conversion::getPrecision(void) const
{
	return this->_precision;
}

void	Conversion::aff_Char(void) const
{
	std::cout << "Char: ";
	try
	{
		std::cout << this->char_Conversion() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Conversion::aff_Int(void) const
{
	std::cout << "Int: ";
	try
	{
		std::cout << this->int_Conversion() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Conversion::aff_Float(void) const 
{
	std::cout << "Float: ";
	try
	{
		std::cout << std::setprecision(this->_precision) 
				<< std::fixed << this->float_Conversion() << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Conversion::aff_Double(void) const 
{
	std::cout << "Double: ";
	try
	{
		std::cout << std::setprecision(this->_precision) 
				<< std::fixed << this->double_Conversion() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* Conversion::NotDisplayable::what() const throw()
{
	return ("Not displayable");
}

const char* Conversion::Invalid::what() const throw()
{
	return ("impossible");
}