#ifndef EASYFIND_H
# define EASYFIND_H

# include <exception>
# include <algorithm>

class	ValueNotFound : public std::exception
{
	public:
		const char	*what() const throw()
		{
			return ("Value not found");
		}
};


template <typename T>
int *easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw ValueNotFound();
	return (reinterpret_cast<int *>(&(*it)));
}

#endif // !EASYFIND_H
