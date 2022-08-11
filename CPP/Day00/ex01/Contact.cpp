/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:27:42 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/06 14:06:51 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	
}
Contact::~Contact(){
	
}

std::string	Contact::getFirstName()
{
	return this->firstName;
}

void    Contact::setFirstName(std::string new_name)
{
	this->firstName = new_name;
}


std::string	Contact::getlastName()
{
	return this->lastName;
}

void    Contact::setlastName(std::string new_name)
{
	this->lastName = new_name;
}



std::string	Contact::getnickName()
{
	return this->nickName;
}

void    Contact::setnickName(std::string new_name)
{
	this->nickName = new_name;
}



std::string	Contact::getphoneNumber()
{
	return this->phoneNumber;
}

void    Contact::setphoneNumber(std::string new_name)
{
	this->phoneNumber = new_name;
}



std::string	Contact::getdarkestSecret()
{
	return this->darkestSecret;
}

void    Contact::setdarkestSecret(std::string new_name)
{
	this->darkestSecret = new_name;
}



