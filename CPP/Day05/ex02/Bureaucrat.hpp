/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:58:22 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/20 23:42:05 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
# include <iostream>
# include <string>
#include <exception>
class Form;
class Bureaucrat
{
	private:
		const std::string	name;
		int		grade;
	public:

		Bureaucrat();
		Bureaucrat(const std::string A, int G);
		std::string			getName();
		int					getGrade();
		void				incrementing();
		void				decrementing();
		void				signForm(Form &F);
		~Bureaucrat();
		class	GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		} high;
		class	GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		}low;
};

std::ostream &operator<<(std::ostream &output, Bureaucrat &X );
#endif