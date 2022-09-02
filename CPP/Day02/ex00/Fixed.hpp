/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:57:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/29 12:12:29 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>
#include <string>
#include <iomanip>

class Fixed
{
	private:
		int					fixed_value;
		static const int	f_bit = 8;
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void operator=(const Fixed &X );
		~Fixed();
};

#endif