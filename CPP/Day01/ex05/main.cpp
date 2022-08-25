/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 11:02:42 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/24 14:05:31 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {

	Harl X;
	X.complain("ERROR");
	std::cout <<std::endl;
	X.complain("DEBUG");
	std::cout <<std::endl;
	X.complain("INFO");
	std::cout <<std::endl;
	X.complain("WARNING");
	std::cout <<std::endl;
	X.complain("dfvdf");
}
