/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:54:06 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/21 11:55:21 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){	
};

Span::Span(const Span &src){
	(void)src;
};

Span	&Span::operator=(const Span &rhs){
	(void)rhs;
	return (*this);
};

Span::Span(unsigned int n): _maxLen(n){	
};

Span::~Span(){
};

void	Span::addNumber(int nb){
};

void	Span::shortestSpan(){
	
};

void	Span::longestSpan(){
	
};
