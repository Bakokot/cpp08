#include "MutantStack.hpp"
#include <iostream>
#include <list>

void	disp(std::string str)
{
	std::cout << "-- " << str << std::endl;
}

/*
 * My own main 
*/

/*
 * main from the subject
*/
//int main()
//{
//	MutantStack<int> mstack;
//	disp("Push 5 and 17");
//	mstack.push(5);
//	mstack.push(17);
//	disp("Print Top");
//	std::cout << mstack.top() << std::endl;
//	disp("Pop");
//	mstack.pop();
//	disp("Print size");
//	std::cout << mstack.size() << std::endl;
//	disp("Push 3 - 5 - 737 - 0");
//	mstack.push(3);
//	mstack.push(5);
//	mstack.push(737);
//	////[...]
//	mstack.push(0);
//	MutantStack<int>::iterator it = mstack.begin();
//	MutantStack<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	disp("Print and iterate through the whole MutantStack");
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	std::stack<int> s(mstack);
//	return 0;
//}

/*
 * main from the subject in std::list version
*/
//int main()
//{
//	std::list<int> mstack;
//	disp("Push 5 and 17");
//	mstack.push_back(5);
//	mstack.push_back(17);
//	disp("Print Top");
//	std::cout << *mstack.end() << std::endl;
//	disp("Pop");
//	mstack.pop_back();
//	disp("Print size");
//	std::cout << mstack.size() << std::endl;
//	disp("Push 3 - 5 - 737 - 0");
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
//	////[...]
//	mstack.push_back(0);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	disp("Print and iterate through the whole std::list");
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	std::stack<int, std::list<int> > s(mstack);
//	return 0;
//}
