#include "easyfind.hpp"
#include <list>
#include <ostream>
#include <vector>
#include <iostream>

int main()
{
	int	*value;
	std::vector<int> vec;

	std::cout << "--- TRY TO FIND A VALUE THAT IS IN THE VECTOR ---" << std::endl;
	vec.push_back(1);
	vec.push_back(189);
	vec.push_back(3);
	vec.push_back(434);
	try
	{
		value = easyfind(vec, 3);
		std::cout << "Found number " << *value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--- TRY TO FIND A VALUE THAT IS NOT IN THE VECTOR ---" << std::endl;	
	try
	{
		value = easyfind(vec, 48);
		std::cout << "Found number " << *value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--- TRY TO FIND A VALUE THAT IS IN THE LIST ---" << std::endl;
	std::list<int> lst; 
	lst.push_back(1);
	lst.push_back(189);
	lst.push_back(3);
	lst.push_back(434);
	try
	{
		value = easyfind(lst, 3);
		std::cout << "Found number " << *value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--- TRY TO FIND A VALUE THAT IS NOT IN THE LIST ---" << std::endl;	
	try
	{
		value = easyfind(lst, 48);
		std::cout << "Found number " << *value << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
