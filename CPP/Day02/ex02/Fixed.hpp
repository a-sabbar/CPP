/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:57:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/15 12:14:33 by asabbar          ###   ########.fr       */
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
		float toFloat( void ) const;
		int toInt( void ) const;
		~Fixed();
		void operator=(const Fixed &X );
		Fixed operator+(const Fixed &X );
		Fixed operator-(const Fixed &X );
		Fixed operator*(const Fixed &X );
		Fixed operator/(const Fixed &X );
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
		bool operator<(const Fixed &X );
		bool operator>(const Fixed &X );
		bool operator<=(const Fixed &X );
		bool operator>=(const Fixed &X );
		static Fixed &min(Fixed &F1, Fixed &F2);
		static Fixed &max(Fixed &F1, Fixed &F2);
		static const Fixed &min(const Fixed &F1, const Fixed &F2);
		static const Fixed &max(const Fixed &F1, const Fixed &F2);
};

std::ostream &operator<<(std::ostream &output, const Fixed &X );

#endif