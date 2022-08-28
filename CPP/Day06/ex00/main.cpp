/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:13:32 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/27 14:10:04 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
bool isint(std::string str)
{
   int i;

	i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return false;
	}
    return true;
}

bool isfloat(std::string str)
{
   int i;

	i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			break;
	}
    if (str[i] == '.')
    {
        while(str[++i])
        {
            if(!isdigit(str[i]))
            {
                if(str[i] == 'f' && str[i + 1] == '\0')
                    return true;
                if(str[i] == '.' && !isdigit(str[i + 1]))
                    return false;
                if(!isdigit(str[i]) && str[i] != '.')
                    return false;
            }
        }
    }
    else
        return false;
    if(str[i] == 'f')
        return true;
    return false;
}

bool isdouble(std::string str)
{
    int i;

	i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			break;
	}
    if (str[i] == '.')
    {
        while(str[++i])
        {
            if(!isdigit(str[i]))
                return false;
        }
    }
    else
        return false;
    return true;
}

void    ft_int(std::string value)
{
    std::cout << "int" << std::endl;
    int nb;
    std::istringstream(value) >> nb;
    std::cout << "char   :  ";
    if(isprint(nb))
    {
        char c = static_cast<char>(nb);
        std::cout << "'" <<c << "'" << std::endl;
    }
    else
        std::cout << "Non displayable" << std::endl;
    std::cout << "int    :  ";
    std::cout << nb << std::endl;
    std::cout << "float  :  ";
    std::cout <<std::fixed<<std::setprecision(1)<< static_cast<float>(nb) << 'f'<< std::endl;
    std::cout << "double :  ";
    std::cout <<static_cast<double>(nb) << std::endl;
}

void    ft_float(std::string value)
{
        std::cout << "float" << std::endl;
        float nb = std::stof(value);
        std::cout << "char   :  ";
        if(isprint(nb))
        {
            char c = static_cast<char>(nb);
            std::cout << "'" <<c << "'" << std::endl;
        }
        else
        std::cout << "Non displayable" << std::endl;
        std::cout << "int    :  ";
        std::cout << static_cast<int>(nb) << std::endl;
        std::cout << "float  :  ";
        std::cout << value << std::endl;
        std::cout << "double :  ";
        std::cout <<std::fixed<<std::setprecision(1)<< static_cast<double>(nb)<< std::endl;
}

void    ft_double(std::string value)
{
        std::cout << "double" << std::endl;
        double nb = std::stod(value);
        std::cout << "char   :  ";
        if(isprint(nb))
        {
            char c = static_cast<char>(nb);
            std::cout << "'" << c << "'"  << std::endl;
        }
        else
            std::cout << "Non displayable" << std::endl;
        std::cout << "int    :  ";
        std::cout << static_cast<int>(nb) << std::endl;
        std::cout << "float  :  ";
        std::cout <<std::fixed<<std::setprecision(1)<< static_cast<float>(nb) <<'f'<< std::endl;
        std::cout << "double :  "<<std::fixed<<std::setprecision(1)<< nb << std::endl;
}

void    ft_char(std::string value)
{
        std::cout << "char   :  " << value << std::endl;
        std::cout << "int    :  ";
        std::cout << static_cast<int>(value[0]) << std::endl;
        std::cout << "float  :  ";
        std::cout <<std::fixed<<std::setprecision(1) << static_cast<float>(value[0])<< 'f'<< std::endl;
        std::cout << "double :  ";
        std::cout << static_cast<double>(value[0]) << std::endl;
        
}
void    pseudo_literals(std::string value)
{
    if (!value.compare("nan"))
    {
        double nb = std::stod(value);
        float nb1 = std::stof(value);
        std::cout << "char   :  " << "impossible" << std::endl;
        std::cout << "int    :  "<< "impossible" << std::endl;
        std::cout << "float  :  " << nb1 << "f"<< std::endl;
        std::cout << "double :  "<< nb << std::endl;
    }
    else if (!value.compare("inf"))
    {
        double nb = std::stod(value);
        float nb1 = std::stof(value);
        std::cout << "char   :  " << "impossible" << std::endl;
        std::cout << "int    :  "<< "impossible" << std::endl;
        std::cout << "float  :  " << nb1  << "f"<< std::endl;
        std::cout << "double :  "<< nb << std::endl;
    }
    else if (!value.compare("+inf"))
    {
        double nb = std::stod(value);
        float nb1 = std::stof(value);
        std::cout << "char   :  " << "impossible" << std::endl;
        std::cout << "int    :  "<< "impossible" << std::endl;
        std::cout << "float  :  " << nb1  << "f"<< std::endl;
        std::cout << "double :  "<< nb << std::endl;
    }
    else if (!value.compare("-inf"))
    {
        double nb = std::stod(value);
        float nb1 = std::stof(value);
        std::cout << "char   :  " << "impossible" << std::endl;
        std::cout << "int    :  "<< "impossible" << std::endl;
        std::cout << "float  :  " << nb1  << "f"<< std::endl;
        std::cout << "double :  "<< nb << std::endl;
    }
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Erorr Argm \n";
        return (1);
    }
    std::string value = av[1];
    if(isint(value))
        ft_int(value);
    else if (isfloat(value))
        ft_float(value);
    else if (isdouble(value))
        ft_double(value);
    else if(value.length() == 1)
        ft_char(value);
    else
        pseudo_literals(value);
    

}