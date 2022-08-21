/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:21:07 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/20 23:42:42 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	private:
		const		std::string name;
		bool		sign;
		const		int grade_s;
		const		int grade_e;
	public:
		Form(std::string name, int g_s, int g_e);
		std::string			getName();	
		bool				getSign();
		int					getGrade_s();	
		int					getGrade_e();	
		void				beSigned(Bureaucrat Bur);
		~Form();
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		} high_e;
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		}low_e;
};
std::ostream &operator<<(std::ostream &output, Form &X );
#endif