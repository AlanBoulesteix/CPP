/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 15:08:10 by aboulest         ###   ########.fr       */
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

void	convertInt(std::string str)
{
	int	nb = atoi(str.c_str());
	std::cout <<"Initial value = " << str << std::endl;
	std::cout << "int convertion = " << static_cast<int>(nb) << std::endl;
	std::cout << "Float convertion = " << static_cast<float>(nb) << std::endl;
	std::cout << "Double convertion = " << static_cast<int>(nb) << std::endl;
}

void	convertChar(std::string str)
{
	char	c = str[0];
	std::cout <<"Initial value = " << str << std::endl;
	std::cout << "int convertion = " << static_cast<int>(c) << std::endl;
	std::cout << "Float convertion = " << static_cast<float>(c) << std::endl;
	std::cout << "Double convertion = " << static_cast<int>(c) << std::endl;
	std::cout << "Char convertion = " << static_cast<char>(c) << std::endl;
}

void	convertFloat(std::string str)
{
	float	nb = atof(str.c_str());
	std::cout <<"Initial value = " << str << std::endl;
	std::cout << "int convertion = " << static_cast<int>(nb) << std::endl;
	std::cout << "Float convertion = " << static_cast<float>(nb) << std::endl;
	std::cout << "Double convertion = " << static_cast<int>(nb) << std::endl;
}

void	convertDouble(std::string str)
{
	(void)str;
}