/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:58 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/07 15:55:57 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		int			getRawBits() const;
		void		setRawBits(int const raw);
		Fixed &		operator=( Fixed const & rhs );

	private:
		int 				_result;
		const static int	_RawBits = 8;

};


#endif /* *********************************************************** FIXED_H */