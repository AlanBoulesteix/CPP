/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:14:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 19:48:18 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.hpp"

ScalarConverter::ScalarConverter(){
	
};

ScalarConverter::~ScalarConverter(){

};

ScalarConverter::ScalarConverter(const ScalarConverter& src): _att(src._att){
	
};

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter& rhs){
	if (this != &rhs)
		_att = rhs._att;
	return (*this);
};

void	ScalarConverter::convert(std::string str){
	int	type = findType(str);
	std::string	types[4] = {
		"char",
		"int",
		"float",
		"double"
	};
	if (!(type & (CHAR_FLAG | INT_FLAG | FLOAT_FLAG | DOUBLE_FLAG)))
	{
		std::cerr << "Undefine type" << std::endl;
		return ;
	}
	if (type == CHAR_FLAG)
		convertChar(str);
	else if (type == INT_FLAG)
		convertInt(str);
	else if (type == FLOAT_FLAG)
		convertFloat(str);
};
