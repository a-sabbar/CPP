#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
#include <vector>

class Span
{
	private:
		unsigned int	N;
		unsigned int	count;
		std::vector<int> 	stack;
	public:

		Span();
		Span(unsigned int N);
		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();
		~Span();
		class exp : public std::exception
		{
			const char* what() const throw();
		};
};

#endif