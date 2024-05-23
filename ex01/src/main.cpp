#include "Span.hpp"
#include <iostream>

int main()
{

	std::cout << "--- Tests from the subject ---" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << "--- TRYING TO ADD A NUMBER AFTER MAX SIZED HAS BEEN REACHED---" << std::endl;
	try {
		sp.addNumber(98);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--- Trying to get shortest and longest span with an empty thing ---" << std::endl;
	Span sp2 = Span(5);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	sp2.addNumber(42);
	std::cout << "--- Trying to get shortest and longest span with only one value ---" << std::endl;
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	Span sp3(10000);
	sp3.addMultipleValues(50, 5000);
	std::vector<int> rangeVector(5000, -50);
	sp3.addRange(rangeVector.begin(), rangeVector.end());
	std::cout << "--- Trying to get shortest and longest span with 10 000 values ---" << std::endl;
	try {
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
