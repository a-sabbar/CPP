/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asabbar <asabbar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:13:32 by asabbar           #+#    #+#             */
/*   Updated: 2022/08/25 14:50:46 by asabbar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <string>
#include <iostream>
#include <iomanip>
bool isint(std::string str)
{
   int i;

	i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i])&& str[0] != '-' && str[0] != '+')
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
		if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
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
bool check(std::string str, char c)
{
   int i;

    if(c == 'F')
    {
        i = -1;
        while(str[++i])
        {
            if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
                break;
        }
        i++;
        if (str[i] == '0' && str[i + 1] == 'f')
        {
            return true;
        }
        return false;        
    }
    if(c == 'D')
    {
        i = -1;
        while(str[++i])
        {
            if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
                break;
        }
        i++;
        if (str[i] == '0' && str[i + 1] == '\0')
        {
            return true;
        }
        return false;        
    }
    return false;        
}

bool isdouble(std::string str)
{
   int i;

	i = -1;
	while(str[++i])
	{
		if(!isdigit(str[i]) && str[0] != '-' && str[0] != '+')
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

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Erorr Argm \n";
        return (1);
    }
    std::string value = av[1];
    if(isint(value))
    {
        std::cout << "int" << std::endl;
        int nb = std::stoi(value);
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
    else if (isfloat(value))
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
        if(check(value, 'F'))
            std::cout <<std::fixed<<std::setprecision(1)<< static_cast<double>(nb)<< std::endl;
        else
            std::cout << static_cast<double>(nb)<< std::endl;
    }
    else if (isdouble(value))
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
        if(check(value, 'D'))
            std::cout <<std::fixed<<std::setprecision(1)<< static_cast<float>(nb) <<'f'<< std::endl;
        else
            std::cout << static_cast<float>(nb) <<'f'<< std::endl;
        std::cout << "double :  ";
        std::cout << value << std::endl;
    }
    else if(value.length() == 1)
    {
        std::cout << "char   :  " << value << std::endl;
        std::cout << "int    :  ";
        std::cout << static_cast<int>(value[0]) << std::endl;
        std::cout << "float  :  ";
        std::cout <<std::fixed<<std::setprecision(1) << static_cast<float>(value[0])<< 'f'<< std::endl;
        std::cout << "double :  ";
        std::cout << static_cast<double>(value[0]) << std::endl;
    }
    else if (!value.compare("nan"))
    {
        std::cout << "char   :  " << "impossible" << std::endl;
        std::cout << "int    :  "<< "impossible" << std::endl;
        std::cout << "float  :  " << "nanf"<< std::endl;
        std::cout << "double :  "<< "nan"<< std::endl;
    }
    else if (!value.compare("inf"))
    {
        std::cout << "char   :  " << "impossible" << std::endl;
        std::cout << "int    :  "<< "impossible" << std::endl;
        std::cout << "float  :  " << "nanf"<< std::endl;
        std::cout << "double :  "<< static_cast<double>(value[0])<< std::endl;
    }
    else
        std::cout << "Not Found \n";
}