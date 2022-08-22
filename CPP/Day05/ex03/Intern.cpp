/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:07:36 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/22 12:18:10 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}
Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3];

	tab[0] = "shrubbery request";
	tab[1] = "robotomy request";
	tab[2] = "presidential request";
	int i = 0;
	while(tab[i] != name && i < 3)
		i++;
	if(tab[i] == name)
	{
		Form	*ret;

		switch (i)
		{
			case 0:
				ret = new ShrubberyCreationForm(target);
				break;
			case 1:
				ret = new RobotomyRequestForm(target);
				break;
			case 2:
				ret = new PresidentialPardonForm(target);
				break;
		}
		return(ret);
	}
	throw error;
}
const char* Intern::Error::what() const throw()
{
	return "Error : name not found !!\n";
}

Intern::~Intern()
{
}