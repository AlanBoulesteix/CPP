/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:14:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/11 20:11:27 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

int		findType(std::string& attribut)
{
	try {
		std::size_t pos = 0;
		int i = std::stoi(attribut, &pos);
		if (pos == attribut.length())
			return (INT_FLAG);
		pos = 0;
		float f = std::stof(attribut, &pos);
		if (pos == attribut.length())
			return (FLOAT_FLAG);
		pos = 0;
		double d = std::stod(attribut, &pos);
		if (pos == attribut.length())
			return (DOUBLE_FLAG);
		if (attribut.length() == 1 && std::isprint(attribut[0]))
			return (CHAR_FLAG);
		return (UNKNOW);
	}
	catch (const std::out_of_range&)
	{
		std::cerr << "Out of range" << std::endl;
	}
	return (0);
}
void	ScalarConverter::convert(){
	int	type = findType(_att);
	std::string	types[4] = {
		"char",
		"int",
		"float",
		"double"
	};
	int	nb[4] = {1,2,4,8};
	for (int i = 0; i < 4; i++)
	{
		if (type == nb[i])
			std::cout << "Type = " << types[i] << std::endl;
	}
};
