/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 00:20:19 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/22 12:17:45 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Form.hpp"

class Intern
{
	private:

	public:

		Intern();
		Form	*makeForm(std::string name, std::string target);
		~Intern();
		class	Error: public std::exception
		{
			virtual const char* what() const throw();
		}error;
};

#endif