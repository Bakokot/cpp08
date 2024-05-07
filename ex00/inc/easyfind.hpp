#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>

template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator	it;
	typename T::iterator	ite = container.end();

	for (it = container.begin(); it != ite; ++it)
		std::cout << *it << std::endl;
	(void)n;
	std::cout << "test" << *container.end() << std::endl;
	return (it);
}

#endif // !EASYFIND_H
