#include "Span.hpp"
#include <unistd.h>
#include <iostream>     
#include <algorithm> 
Span::Span()
{
}
Span::Span(unsigned int N)
{
	this->N = N;
	this->count = 0;
}

Span::~Span()
{
}

void	Span::addNumber(int nb)
{
	if(count < N)
	{
		count++;
		stack.push_back(nb);
	}
	else
		throw exp();
}

int	Span::shortestSpan()
{
	for (std::vector<int>::iterator i = stack.begin(); (i + 1) != stack.end(); ++i)
	{
		std::vector<int>::iterator fin;
		fin = find (i + 1, stack.end(), *i);
		if (*fin == *i)
			return (0);
	}
	std::vector<int>::iterator it;
    it = std::min_element(stack.begin(),stack.end());
	std::vector<int>::iterator it1;
    it1 = std::max_element(stack.begin(),stack.end());
	int ret = *it1 - *it;
	int nb;
	for (std::vector<int>::iterator i = stack.begin(); i != stack.end(); ++i)
	{
		std::vector<int>::iterator j = stack.begin();
		while(j != stack.end())
		{
			if(j == i)
				j++;
			
			else{
				nb = *i - *j; 
				if(nb > 0 && nb < ret)
					ret = nb;
				j++;
			}
		}
	}
	return (ret);
}
int	Span::longestSpan()
{
	std::vector<int>::iterator it;
    it = std::min_element(stack.begin(),stack.end());
	std::vector<int>::iterator it1;
    it1 = std::max_element(stack.begin(),stack.end());
	return (*it1 - *it);
}

const char* Span::exp::what() const throw()
{
    return "out N !!";
}