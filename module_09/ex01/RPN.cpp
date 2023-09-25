/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:51:52 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/25 14:14:58 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
	
};

RPN::~RPN() {
	
};

RPN::RPN(const RPN &src) {
	(void)src;
};

RPN	&RPN::operator=(const RPN &rhs) {
	(void)rhs;
	return (*this);
};

void	RPN::addParam(int param) {
	
};

int		RPN::rpn() {
	while (_stack.empty())
	{
		
	}
};

const char *RPN::WrongTypeErrorException::what() const throw(){
	return ("Wrong param input");
};

const char *RPN::ComputeErrorException::what() const throw(){
	return ("Impossible to do computation");
};
