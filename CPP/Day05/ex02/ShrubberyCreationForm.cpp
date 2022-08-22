/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:06:38 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/21 17:50:15 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string	trg)
{
	this->target = trg;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream   file;

	if(executor.getGrade() <= 145 && executor.getGrade() <= 137)
	{
		file.open(this->target + "_shrubbery");
		file << "            /\\\n";
		file << "           /__\\\n";
		file << "          /____\\\n";
		file << "         /______\\\n";
		file << "        /________\\\n";
		file << "       /__________\\\n";
		file << "           |  |    \n";
		file << "           |__|    \n";
	}
	else
		throw low_e;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
