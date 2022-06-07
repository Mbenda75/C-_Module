/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:58 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 20:37:44 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
#include <cmath>


class Fixed
{

	public:

		Fixed();
		Fixed( const Fixed & src );
		Fixed(int const );
		Fixed(float const );
		~Fixed();

		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat( void ) const;
		int				toInt( void ) const;
		static Fixed const	&	min(Fixed const &nb1, Fixed const &nb2);
		static Fixed const	&	max(Fixed const &nb1, Fixed const &nb2); 
		static Fixed &			min(Fixed &nb1, Fixed &nb2);
		static Fixed &			max(Fixed &nb1, Fixed &nb2);
		
		//		comparaison operator
		bool		operator>( Fixed const & rhs);
		bool		operator<( Fixed const & rhs);
		bool		operator>=( Fixed const & rhs);
		bool		operator<=( Fixed const & rhs);
		bool		operator==( Fixed const & rhs);
		bool		operator!=( Fixed const & rhs);
		//		arithmetic operators
		Fixed &		operator=( Fixed const & rhs );
		Fixed		operator+( Fixed const & rhs);
		Fixed		operator*( Fixed const & rhs);
		Fixed		operator-( Fixed const & rhs);
		Fixed		operator/( Fixed const & rhs);
		
		//	increment and decrement operators
		Fixed		operator++(int);
		Fixed		operator--(int);
		Fixed &		operator++(void);
		Fixed &		operator--(void);
		
	private:
		int 				_result;
		const static int	_RawBits = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */