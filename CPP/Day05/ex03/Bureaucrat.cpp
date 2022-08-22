/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:58:26 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/21 17:37:46 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}
Bureaucrat::Bureaucrat(const std::string A, int G) : name(A), grade(G)
{
    if(this->grade < 1 )
        throw high;
    if(this->grade > 150)
        throw low;
}


std::string	Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void	Bureaucrat::incrementing()
{
    if(this->grade <= 1)
        throw high;
    this->grade--;
}

void	Bureaucrat::decrementing()
{
    if(this->grade >= 150)
        throw low;
    this->grade++;
}


void			Bureaucrat::signForm(Form &F)
{
    if(F.getSign())
    {
        std::cout << *this << " signed " << F;
    }
    else
    {
        std::cout << *this << " couldn't sign  " << F << "\nBecause your grade does not match with " << F.getName();
    }
}

Bureaucrat::~Bureaucrat()
{
}



const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade is too High !!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade is too low !!";
}


std::ostream &operator<<(std::ostream &output, Bureaucrat &X )
{
    output << X.getName() << ", bureaucrat grade " << X.getGrade();
    return(output);
}