/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:14:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/15 11:30:22 by aboulest         ###   ########.fr       */
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

	if (!(type & (CHAR_FLAG | INT_FLAG | FLOAT_FLAG | DOUBLE_FLAG | PSEUDO_FLAG)))
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
	else if (type == DOUBLE_FLAG)
		convertDouble(str);
	else if (type == PSEUDO_FLAG)
		convertPseudo(str);
};
