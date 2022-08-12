/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:57:39 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/12 17:17:44 by asabbar          ###   ########.fr       */
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
		static const int	f_bit;
	public:
		Fixed();
		Fixed(Fixed &fixed);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		void operator = (const Fixed &X );
		~Fixed();
};

#endif