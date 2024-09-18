#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> stacking;
	stacking.push(1);
	stacking.push(5);
	MutantStack<int> stacking2(stacking);
	std::cout << stacking2.size() << std::endl;
	std::cout << stacking2.top() << std::endl;
	return (0);
}

