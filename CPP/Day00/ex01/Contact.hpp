/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:54:32 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:41:29 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Contact{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	public:
	Contact();
	void			setFirstName(std::string);
	std::string		getFirstName();
	void			setlastName(std::string);
	std::string		getlastName();
	void			setnickName(std::string);
	std::string		getnickName();
	void			setphoneNumber(std::string);
	std::string		getphoneNumber();
	void			setdarkestSecret(std::string);
	std::string		getdarkestSecret();
	~Contact();
};

void	print_10(std::string str);
#endif