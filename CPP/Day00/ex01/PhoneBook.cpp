/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:54:35 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/07 12:48:10 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


Phonebook::Phonebook(){
	
}
Phonebook::~Phonebook(){
	
}



void    Phonebook::setFirstName_phone(std::string new_name, int i)
{
	this->info[i].setFirstName(new_name);
}

std::string Phonebook::getFirstName_phone(int i)
{
	return this->info[i].getFirstName();
}



void    Phonebook::setlastName_phone(std::string new_name, int i)
{
	this->info[i].setlastName(new_name);
}

std::string Phonebook::getlastName_phone(int i)
{
	return this->info[i].getlastName();
}



void    Phonebook::setnickName_phone(std::string new_name, int i)
{
	this->info[i].setnickName(new_name);
}

std::string Phonebook::getnickName_phone(int i)
{
	return this->info[i].getnickName();
}



void    Phonebook::setphoneNumber_phone(std::string new_name, int i)
{
	this->info[i].setphoneNumber(new_name);
}

std::string Phonebook::getphoneNumber_phone(int i)
{
	return this->info[i].getphoneNumber();
}



void    Phonebook::setdarkestSecret_phone(std::string new_name, int i)
{
	this->info[i].setdarkestSecret(new_name);
}

std::string Phonebook::getdarkestSecret_phone(int i)
{
	return this->info[i].getdarkestSecret();
}

void	print_10(std::string str)
{
	char ret[11];

	if(str.length() > 10)
	{
		str.copy(ret, 10, 0);
		ret[9] = '.';
		ret[10] = '\0';
		std::cout << ret;
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
}