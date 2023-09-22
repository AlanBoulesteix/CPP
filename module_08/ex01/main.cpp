/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:56:30 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 12:26:53 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


void	tryAddVector()
{
	try {
		Span	span1(2147483648);
		std::vector<int>	vecInt(500, 25);
		span1.addNumber(vecInt);
		std::cout << "Shortest Span = " << span1.shortestSpan() << std::endl;
		std::cout << "Longest Span = " << span1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	tryEmptySpan()
{
	try{
		Span	span;
		span.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	spanFull()
{
	try {
		Span	span(3);
		for (int i = 0; i < 4; ++i)
		{
			span.addNumber(i);
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	spanSujet()
{
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	tryAddVector();
	std::cout << "==================" << std::endl;
	tryEmptySpan();
	std::cout << "==================" << std::endl;
	spanFull();
	std::cout << "==================" << std::endl;
	spanSujet();
	std::cout << "==================" << std::endl;
}