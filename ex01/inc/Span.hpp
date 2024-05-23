#ifndef SPAN_HPP
# define SPAN_HPP

#include <exception>
#include <iterator>
#include <vector>
#include <algorithm>
#include <climits>
#include <cstdlib>


class Span {
	private:
		unsigned int		_maxSize;
		unsigned int		_currentSize;
		std::vector<int>	_values;
	public:
		Span();
		Span(unsigned int maxSize);
		Span(const Span &cpy);
		Span &operator=(const Span &rhs);
		~Span();

		void			addNumber(int n);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		void			addMultipleValues(int n, unsigned int size);
		std::vector<int> getValues() const;
/*
 *	EXCEPTIONS
*/
		class MaxSizeReached : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Max Size has already been reached");
				}	
		};

		class NoSpanPossible : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("There are not enough values to calculate a span");
				}	
		};

/*
 * 	TEMPLATES
*/
		template < class Iterator >
		void			addRange(Iterator begin, Iterator end)
		{
			unsigned int distance = std::distance(begin, end);
			if (_currentSize + distance > _maxSize)
				throw MaxSizeReached();
			_currentSize += distance;
			std::copy(begin, end, std::back_inserter(_values));
		}
};

#endif
