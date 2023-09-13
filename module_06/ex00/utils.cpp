/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/13 17:35:18 by aboulest         ###   ########.fr       */
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
	std::cout << "Initial value = " << str << std::endl;
	std::cout << "Char convertion = " << c << std::endl;
	std::cout << "int convertion = " << intValue << std::endl;
	std::cout << "Float convertion = " << floatValue << std::endl;
	std::cout << "Double convertion = " << doubleValue << std::endl;
}

void	convertInt(std::string str)
{
	int		intValue = atoi(str.c_str());
	float	floatValue = static_cast<float>(intValue);
	double	doubleValue = static_cast<double>(intValue);
	char	c = static_cast<char>(intValue);
	std::cout << "Initial value = " << str << std::endl;
	std::cout << "Char convertion = " << c << std::endl;
	std::cout << "int convertion = " << intValue << std::endl;
	std::cout << "Float convertion = " << floatValue << ".0f" << std::endl;
	std::cout << "Double convertion = " << doubleValue << ".0" << std::endl;
}

void	convertFloat(std::string str)
{
	
	std::cout << "Initial value = " << str << std::endl;
}

void	convertDouble(std::string str)
{
	(void)str;
}
