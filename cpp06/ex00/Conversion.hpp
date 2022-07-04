#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <climits>
# include <math.h>
# include <string.h>
# include <iomanip>


class Conversion {

	public:
		Conversion (char const *input);
		Conversion(Conversion & cpy);
		~Conversion (void);
		
		int		int_Conversion(void) const;
		char	char_Conversion(void) const;
		float	float_Conversion(void) const;
		double	double_Conversion(void) const;
		void	aff_Char(void) const;
		void	aff_Int(void) const;
		void	aff_Float(void) const;
		void	aff_Double(void) const;
		int		getPrecision(void) const;
		
		
		
		Conversion & operator=(Conversion const & rhs);


		class Invalid : public std::exception {
			
			public:
				virtual const char* what() const throw();
		};

		class NotDisplayable : public std::exception {
			
			public:
				virtual const char* what() const throw();
		};

	private:
		double 	_conv;
		int 	_precision;
	

};

#endif /* ****************************************************** CONVERSION_H */