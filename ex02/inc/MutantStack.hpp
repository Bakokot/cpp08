#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <cstddef>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>();
		MutantStack<T>(const MutantStack<T> &cpy);
		~MutantStack<T>();

		MutantStack<T> operator=(const MutantStack<T> &rhs);

		//typedef typename std::stack<T>::container_type::iterator iterator;	
		typedef typename std::deque<T>::iterator iterator;	
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin();
		iterator	end();
		const_iterator	cbegin() const;
		const_iterator	cend() const;
	private:

};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &cpy) : std::stack<T>(cpy)
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>	MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	if (this == &rhs)
		return (*this);
	this->c = rhs.c;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin() 
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end() 
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const
{
	return (this->c.cbegin());
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::cend() const
{
	return (this->c.cend());
}

#endif
