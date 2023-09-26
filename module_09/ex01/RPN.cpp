/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:51:52 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/26 16:51:32 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	compute(RPN &rpn, char op)
{
	int	nb1;
	int	nb2;
	if (rpn.getStack().size() != 0)
		nb1 = rpn.popParam();
	else
		throw RPN::ComputeErrorException();
	if (rpn.getStack().size() != 0)
		nb2 = rpn.popParam();
	else
		throw RPN::ComputeErrorException();
	if (op == '+')
		return (nb2 + nb1);
	else if (op == '-')
		return (nb2 - nb1);
	else if (op == '*')
		return (nb2 * nb1);
	else if (op == '/')
		return (nb2 / nb1);
	throw RPN::ComputeErrorException();
}

bool	isOpe(char c)
{
	char		str[4] = {'+', '-', '*', '/'};
	for (size_t i = 0; i < 4; i++)
	{
		if (c == str[i])
			return (true);
	}
	return (false);
}

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

std::stack<int>		RPN::getStack() const {
	return (_stack);
};

void	RPN::addParam(int param) {
	_stack.push(param);
};

int		RPN::popParam() {
	int		rtn = _stack.top();
	_stack.pop();
	return (rtn);
};

int	RPN::rpn(std::string str){
	int		rtn;
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (isdigit(str[i]) && str[i + 1] != ' ')
			throw WrongTypeErrorException();
		else if (isOpe(str[i]) && _stack.size() < 1)
			throw ComputeErrorException();
		else if (isdigit(str[i]))
			this->addParam(str[i] - '0');
		else if (isOpe(str[i]))
			this->addParam(compute(*this, str[i]));
		else if (str[i] != ' ')
			throw WrongTypeErrorException();
	}
	if (_stack.size() != 1)
		throw ComputeErrorException();
	rtn = this->popParam();
	return (rtn);
};

const char *RPN::WrongTypeErrorException::what() const throw(){
	return ("Wrong param input");
};

const char *RPN::ComputeErrorException::what() const throw(){
	return ("Impossible to do computation");
};
