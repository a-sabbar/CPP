/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:48:38 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/30 16:02:48 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
    this->target = target;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int i = rand() % 2;
	if(executor.getGrade() <= 25 && executor.getGrade() <= 5)
    {
        if(i)
        {
            std::cout << this->target << " has been robotomized successfull"<< std::endl;  
        }
        else
        {
            std::cout << this->target << " the robotomy failed"<< std::endl;  
        }
	}
	else
		throw low_e;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
