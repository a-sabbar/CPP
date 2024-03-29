/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:57:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/31 19:03:28 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Fixed
{
	private:
		int					fixed_value;
		static const int	f_bit = 8;
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		Fixed(const int fixed);
		Fixed(const float fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void operator=(const Fixed &X );
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
};

std::ostream &operator<<(std::ostream &output, const Fixed &X );

#endif