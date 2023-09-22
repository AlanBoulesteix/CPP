/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:54:09 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/22 12:21:29 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <vector>

class Span {

	private:
		unsigned int		_maxLen;
		std::vector<int>	_intContainer;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &src);
		Span	&operator=(const Span &rhs);
		~Span();

		void	addNumber(int nb);
		void	addNumber(std::vector<int> tabInt);
		int		shortestSpan();
		int		longestSpan();

	class NoSpanException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class ContainerFullException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
	class CapacityTooSmallException: public std::exception {
		public:
			virtual const char *what() const throw();
	};
};