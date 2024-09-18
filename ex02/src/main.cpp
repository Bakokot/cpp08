#include "MutantStack.hpp"
#include <iostream>
#include <list>

static void	disp(std::string str)
{
	std::cout << "-- " << str << std::endl;
}

/*
 * main from the subject + some tests of mine
*/
int main()
{
	MutantStack<int> mstack;
	disp("Push 5 and 17");
	mstack.push(5);
	mstack.push(17);
	disp("Print Top");
	std::cout << mstack.top() << std::endl;
	disp("Pop");
	mstack.pop();
	disp("Print size");
	std::cout << mstack.size() << std::endl;
	disp("Push 3 - 5 - 737 - 0");
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	////[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	disp("Print and iterate through the whole MutantStack");
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	disp("Print and iterate through the whole MutantStack with const iterators");
	MutantStack<int>::const_iterator itc = mstack.begin();
	MutantStack<int>::const_iterator itec = mstack.end();
	while (itc != itec)
	{
		std::cout << *itc << std::endl;
		++itc;
	}
	disp("Testing copy constructor + operator =");
	MutantStack<int> cpy(mstack);
	mstack.push(42);
	MutantStack<int>::iterator it1 = cpy.begin();
	MutantStack<int>::iterator ite1 = cpy.end();
	disp("Printing copy constructor");
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	};
	MutantStack<int> op;
	op = cpy;
	cpy.push(42);
	MutantStack<int>::iterator it2 = op.begin();
	MutantStack<int>::iterator ite2 = op.end();
	disp("Printing operator=");
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	};;
	return 0;
}

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
