/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:14:48 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/11 15:13:01 by aboulest         ###   ########.fr       */
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

int		findType(std::string attribut)
{
	bool	charFlag = true;
	bool	intFlag = true;
	bool	flaotFlag = true;
	bool	doubleFlag = true;

	if (attribut.length() != 1 || !(std::isprint(attribut[0])) || !std::isdigit(attribut[0]))
		charFlag = false;
	
}

void	ScalarConverter::convert(){
};
