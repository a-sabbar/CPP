/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:59:49 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:41:27 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include  <iostream>
#include <iomanip> 


bool isNumber(std::string str)
{
   int i;

	i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]))
			return false;
	}
    return true;
}


void	print_info(Phonebook C, int index)
{
	std::cout << "FirstName    : ";
	std::cout << C.getFirstName_phone(index) << std::endl;
	std::cout << "lastName     : ";
	std::cout << C.getlastName_phone(index) << std::endl;
	std::cout << "nickName     : ";
	std::cout << C.getnickName_phone(index) << std::endl;
	std::cout << "phoneNumber  : ";
	std::cout << C.getphoneNumber_phone(index) << std::endl;
	std::cout << "Secret       : ";
	std::cout << C.getdarkestSecret_phone(index)<< std::endl;
}

int main(void)
{
	Phonebook   C;
	std::string input;
	std::string ADD;
	int         i;
	int         j;
	int         index;

	i = 0;
	while(1)
	{
		std::cout << ">>  ";
		if(!getline(std::cin, input))
			break;
		if(input.compare("ADD") == 0)
		{ 
			std::cout << "FirstName    : ";
			if(!getline(std::cin, ADD))
				break ;
			C.setFirstName_phone(ADD, i);
			std::cout << "lastName     : ";
			if(!getline(std::cin, ADD))
				break ;
			C.setlastName_phone(ADD, i);
			std::cout << "nickName     : ";
			if(!getline(std::cin, ADD))
				break ;
			C.setnickName_phone(ADD, i);
			std::cout << "phoneNumber  : ";
			if(!getline(std::cin, ADD))
				break ;
			C.setphoneNumber_phone(ADD, i);
			std::cout << "Secret       : ";
			if(!getline(std::cin, ADD))
				break ;
			C.setdarkestSecret_phone(ADD, i);
			i++;
		}
		else if(input.compare("SEARCH") == 0)
		{
			j = 0;
			std::cout << "-------------------------------------------------"<< std::endl;
			std::cout << " INDEX |" << "   FirstName   |" << "   lastName   |" << "  nickName  |"<< std::endl;
			std::cout << "-------------------------------------------------"<< std::endl;
			while(j < i)
			{
				std::cout << j;
				std::cout << "      |  ";
				print_10( C.getFirstName_phone(j));
				std::cout << "   |  ";
				print_10( C.getlastName_phone(j));
				std::cout << "  |  ";
				print_10( C.getnickName_phone(j));
				std::cout << "  |   ";
				std::cout << std::endl;
				std::cout << "-------------------------------------------------"<< std::endl;
				j++;
			}
			if(j)
			{
				std::cout << "Enter index : ";
				if(!getline(std::cin, ADD))
					break ;
				if(isNumber(ADD))
					index = stoi(ADD);
				else
				{
					index = -1;
					std::cout << "Is Not Number !!!"<< std::endl;
				}
			}
			if(index < j && index >= 0)
				print_info(C, index);
		}
		else if(input.compare("EXIT") == 0)
		{
			break;   
		}
		if(i == 8)
			i = 0;
	}
}