/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:07:36 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/23 14:45:55 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Form		*Intern::ShrubberyForm(std::string	target)
{
	Form *ret;
	ret = new ShrubberyCreationForm(target);
	return ret;
}
Form		*Intern::RobotomyForm(std::string	target)
{
	Form *ret;
	ret = new RobotomyRequestForm(target);
	return ret;
}
Form		*Intern::PresidentialForm(std::string	target)
{
	Form *ret;
	ret = new PresidentialPardonForm(target);
	return ret;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string tab[3];
	Intern			X;
	tab[0] = "shrubbery request";
	tab[1] = "robotomy request";
	tab[2] = "presidential request";
	Form *(Intern::* ptf) (std::string target) = &Intern::ShrubberyForm;
	Form *(Intern::* ptf1) (std::string target) = &Intern::RobotomyForm;
	Form *(Intern::* ptf2) (std::string target) = &Intern::PresidentialForm;
	int i = 0;
	while(tab[i] != name && i < 3)
		i++;
	if(tab[i] == name)
	{
		std::cout << "Intern creates " << tab[i] << '\n'<< std::endl;
		switch (i)
		{
			case 0:
				return((X.*ptf) (target));
				break;
			case 1:
				return((X.*ptf1) (target));
				break;
			case 2:
				return((X.*ptf2) (target));
				break;
		}
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