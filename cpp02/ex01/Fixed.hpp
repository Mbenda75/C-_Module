/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:58 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 18:36:03 by benmoham         ###   ########.fr       */
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

		int			getRawBits() const;
		void		setRawBits(int const raw);
		float		toFloat( void ) const;
		int			toInt( void ) const;
		Fixed &		operator=( Fixed const & rhs );
		
	private:
		int 				_result;
		const static int	_RawBits = 8;

};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */