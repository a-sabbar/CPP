#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>  

template <typename T>
T	easyfind(std::list<T> first, int second)
{
	typename std::list<T>::iterator it;
    it = find (first.begin(), first.end(), second);
	if(*it == second)
		return (*it);
	std::cout<< "Error !!! \n";
	exit(1);
}
#endif