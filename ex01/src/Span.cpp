#include "Span.hpp"

Span::Span() : _maxSize(0), _currentSize(0)
{
}

Span::Span(unsigned int maxSize) : _maxSize(maxSize), _currentSize(0)
{
}

Span::~Span()
{
}

Span::Span(const Span &cpy) : _maxSize(cpy._maxSize), _currentSize(cpy._currentSize), _values(cpy._values)
{
}

Span	&Span::operator=(const Span &rhs)
{
	if (this == &rhs)
		return (*this);
	_maxSize = rhs._maxSize;
	_currentSize = rhs._currentSize;
	_values = rhs._values;
	return (*this);
}

void			Span::addNumber(int n)
{
	if (_currentSize == _maxSize)
		throw MaxSizeReached();
	_currentSize++;
	_values.push_back(n);
}

unsigned int	Span::shortestSpan() const
{
	if (_currentSize <= 1)
		throw NoSpanPossible();
	int	ret = INT_MAX;
	for (std::vector<int>::const_iterator it = _values.begin(); it != _values.end(); ++it)
	{
		if (it == _values.end())
			break ;
		if (abs(*it - *(it + 1)) < ret)
			ret = abs(*it - *(it + 1)); 
	}
	return (ret);
}

unsigned int	Span::longestSpan() const
{
	if (_currentSize <= 1)
		throw NoSpanPossible();
	int max = *std::max_element(_values.begin(), _values.end());
	int min = *std::min_element(_values.begin(), _values.end());
	return (max - min);
}

/*
 * add size * n values at the end of the Span
*/
void			Span::addMultipleValues(int n, unsigned int size)
{
	if (_currentSize + size > _maxSize)
		throw MaxSizeReached();
	_currentSize += size;
	_values.insert(_values.end(), size, n);
}

std::vector<int>	Span::getValues() const
{
	return (_values);
}
