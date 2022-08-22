/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:21:04 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/22 00:26:48 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():grade_s(150), grade_e(150)
{
}
Form::Form(std::string name, int g_s, int g_e) : name(name), sign (false), grade_s(g_s), grade_e(g_e)
{
	if(g_s > 150 || g_e > 150)
		throw low_e;
	if(g_s < 1 || g_e < 1)
		throw high_e;
}

std::string			Form::getName()
{
	return this-> name;
}
bool				Form::getSign()
{
	return this->sign;
}
int					Form::getGrade_s()
{
	return this->grade_s;
}
int					Form::getGrade_e()
{
	return this->grade_e;
}

void    Form::beSigned(Bureaucrat Bur)
{
	if(Bur.getGrade() <= this->grade_s)
	{
		this->sign = true;
	}
	else
	{
		throw low_e;
	}
}


const char* Form::GradeTooHighException::what() const throw()
{
	return "Form : grade is too High !!";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Form : grade is too low !!";
}

std::ostream &operator<<(std::ostream &output, Form &X )
{
	output << X.getName() << " : grade required to sign " << X.getGrade_s()			\
	<< ",\ngrade required to execute " << X.getGrade_e() << ",\nstatus of sign ";
	if(X.getSign())
		std::cout << "( true )\n";
	else
		std::cout << "( false )\n";
	return(output);
}

Form::~Form()
{
}