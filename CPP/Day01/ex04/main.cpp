/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:29:22 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/19 22:42:21 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	ft_replace(std::string line, std::string s1, std::string s2, std::ofstream   &newfile)
{
	int 			i;
	int 			j;
	i = -1;
	while(line[++i])
	{
		j = 0;
		while(s1[j] == line[i + j])
		{
			if (s1[j + 1] == '\0')
			{
				newfile << s2;
				i += s1.length();
				ft_replace(&line[i], s1, s2 , newfile);
				return ;
			}
			j++;
		}
		newfile << line[i];
	}
}


int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error argm !!\n";
		return (1);
	}
	std::string     file;
	std::string     line;
	std::string     s1;
	std::string     s2;
	std::ifstream   myfile;
	std::ofstream   newfile;

	s1 = av[2];
	s2 = av[3];
	file = av[1];
	myfile.open(file);
	if(!myfile.is_open())
	{
		std::cout << "Error : i can't found this file" << '\n';
		return (1);
	}
	newfile.open(file + ".replace");
	if(!newfile.is_open())
	{
		std::cout << "Error : i can't open the new file" << '\n';
		return (1);
	}
	while (getline(myfile,line, '\0'))
		ft_replace(line, s1, s2, newfile);
	myfile.close();
	newfile.close();
}