/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:51:48 by asabbar           #+#    #+#             */
/*   Updated: 2022/09/03 11:51:36 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
	RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		void    execute(Bureaucrat const & executor) const;
		~RobotomyRequestForm();
};


#endif 