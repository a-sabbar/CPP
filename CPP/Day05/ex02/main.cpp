/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:58:18 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/30 16:02:32 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

int main()
{
	srand(time(NULL));
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat				bob("Bob", 1);
		Bureaucrat				bill("Bill", 142);
		ShrubberyCreationForm	shrub("shrub");

		shrub.beSigned(bill);
		shrub.execute(bill);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat				bob("Bob", 1);
		Bureaucrat				bill("Bill", 142);
		PresidentialPardonForm	Presi("Presi");

		Presi.beSigned(bill);
		Presi.execute(bill);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat				bob("Bob", 1);
		Bureaucrat				bill("Bill", 142);
		RobotomyRequestForm		Robot("Robot");

		Robot.beSigned(bill);
		Robot.execute(bill);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}