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
	for (std::size_t i = 0; i < rhs.size; i++)
	{
		this[i] = rhs[i];
	}
	return (*this);
}
#endif
