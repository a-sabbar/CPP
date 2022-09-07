#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stack>

template <typename T, class conatainer = std::deque<T> >
class MutantStack : public std::stack<T, conatainer>
{
	public:
		typedef typename std::stack<T, conatainer>::container_type::iterator				iterator;
		typedef typename std::stack<T, conatainer>::container_type::const_iterator			const_iterator;
		typedef typename  std::stack<T, conatainer>::container_type::reverse_iterator		reverse_iterator;

	public:
		MutantStack()
		{
		}
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		~MutantStack()
		{
		}
		void operator=(MutantStack const &X)
		{
			this->c = X.c;
		}
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		const_iterator begin() const
		{
			return this->c.begin();
		}
		const_iterator end()  const
		{
			return this->c.end();
		}
		reverse_iterator       rbegin() 
		{
			return this->c.rbegin();
		}
		reverse_iterator       rend() 
		{
			return this->c.rend();
		}
};

#endif /* ***************************************************** MUTANTSTACK_H */