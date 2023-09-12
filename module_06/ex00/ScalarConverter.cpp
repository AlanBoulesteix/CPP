/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:14:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 15:00:58 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "utils.cpp"

ScalarConverter::ScalarConverter(){
	
};

ScalarConverter::ScalarConverter(std::string attribut): _att(attribut){
	
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

void	ScalarConverter::convert(){
	int	type = findType(_att);

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
		convertChar(_att);
	else if (type == INT_FLAG)
		convertInt(_att);
	else if (type == FLOAT_FLAG)
		convertFloat(_att);
};
