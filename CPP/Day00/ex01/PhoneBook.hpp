/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:54:32 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/06 13:59:37 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook{
	private:
		Contact info[8];
	public:
		Phonebook();
		void			setFirstName_phone(std::string, int	i);
		std::string		getFirstName_phone(int i);
		void			setlastName_phone(std::string, int	i);
		std::string		getlastName_phone(int i);
		void			setnickName_phone(std::string, int	i);
		std::string		getnickName_phone(int i);
		void			setphoneNumber_phone(std::string, int	i);
		std::string		getphoneNumber_phone(int i);
		void			setdarkestSecret_phone(std::string, int	i);
		std::string		getdarkestSecret_phone(int i);
		~Phonebook();
};
#endif