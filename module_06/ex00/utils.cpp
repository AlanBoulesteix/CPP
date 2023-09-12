/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 21:37:57 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"
#include <stdlib.h>

bool	isInt(std::string str)
{
	for (std::string::iterator it=str.begin(); it != str.end(); ++it)
	{
		if (!isdigit(*it))
			return (false);
	}
	return (true);
}

bool	isFloat(std::string str)
{
	int	counterDote = 0;
	int	counterF = 0;
	
	for (std::string::iterator it=str.begin(); it != str.end(); ++it)
	{
		if (*it == '.')
			counterDote++;
		else if (*it == 'f')
			counterF++;
		else if (!isdigit(*it) && *it == '-')
			return (false);
	}
	return (counterDote == 1 && counterF == 1);
}

bool	isDouble(std::string str)
{
	int	counterDote = 0;
	int	counterF = 0;
	
	for (std::string::iterator it=str.begin(); it != str.end(); ++it)
	{
		if (*it == '.')
			counterDote++;
		else if (*it == 'f')
			counterF++;
		else if (!isdigit(*it) && *it == '-')
			return (false);
	}
	return (counterDote == 1 && counterF == 0);
}

int		findType(std::string& str)
{
	int		flag = FULL_FLAG;
	
	if (str.length() != 1 || !isprint(str[0]) || isdigit(str[0]))
		flag -= CHAR_FLAG;
	if (!(isInt(str)))
		flag -= INT_FLAG;
	if (!isFloat(str))
		flag -= FLOAT_FLAG;
	if (!isDouble(str))
		flag -= DOUBLE_FLAG;
	return (flag);
}


void	convertChar(std::string str)
{
	char	c = str[0];
	int		intValue = static_cast<int>(c) ;
	float	floatValue = static_cast<float>(intValue);
	double	doubleValue = static_cast<double>(intValue);
	std::cout <<"Initial value = " << str << std::endl;
	std::cout << "int convertion = " << intValue << std::endl;
	std::cout << "Float convertion = " << floatValue << std::endl;
	std::cout << "Double convertion = " << doubleValue << std::endl;
	std::cout << "Char convertion = " << c << std::endl;
}

void	convertInt(std::string str)
{
	std::cout <<"Initial value = " << str << std::endl;
}

void	convertFloat(std::string str)
{
	
	std::cout << "Initial value = " << str << std::endl;
}

void	convertDouble(std::string str)
{
	(void)str;
}

void	printAllConvertion(char charV, int intV, float floatV, double doubleV)
{
	std::string	cStr(1, charV);
	std::string	iStr(intV);
}