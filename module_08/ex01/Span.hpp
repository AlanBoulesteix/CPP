/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:54:09 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/21 11:50:06 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Span {

	private:
		unsigned int	_maxLen;
		
		Span();
		Span(const Span &src);
		Span	&operator=(const Span &rhs);

	public:
		Span(unsigned int n);
		~Span();

		void	addNumber(int nb);
		void	shortestSpan();
		void	longestSpan();

	class NoSpanException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};