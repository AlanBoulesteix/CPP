/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/15 12:05:47 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <limits>
#include "ScalarConverter.hpp"

bool	isInt(std::string str)
{
	
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (!isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	isFloat(std::string str)
{
	int	counterDote = 0;
	int	counterF = 0;
	
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (str[i] == '.')
			counterDote++;
		else if (str[i] == 'f')
			counterF++;
		else if (!isdigit(str[i]) && str[i] == '-')
			return (false);
	}
	return (counterDote == 1 && counterF == 1);
}

bool	isDouble(std::string str)
{
	int	counterDote = 0;
	int	counterF = 0;
	
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (i == 0 && str[i] == '-')
			i++;
		if (str[i] == '.')
			counterDote++;
		else if (str[i] == 'f')
			counterF++;
		else if (!isdigit(str[i]) && str[i] == '-')
			return (false);
	}
	return (counterDote == 1 && counterF == 0);
}

bool	isPseudo(std::string str)
{
	std::string	list[8] = {"-inff", "+inff", "nanf","-inf", "+inf", "nan", "inf", "inff"};
	for (int i = 0; i < 8; ++i)
	{
		if (str == list[i])
			return (true);
	}
	return (false);
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
	if (!isPseudo(str))
		flag -= PSEUDO_FLAG;
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
	if (atol(str.c_str()) < std::numeric_limits<int>::min() || atol(str.c_str()) > std::numeric_limits<int>::max())
	{
		std::cerr << "IMPOSSIBLE" << std::endl << "Could not convert" << std::endl;
		return ;
	}
	int		intValue = atoi(str.c_str());
	float	floatValue = static_cast<float>(intValue);
	double	doubleValue = static_cast<double>(intValue);
	char	c = static_cast<char>(intValue);
	
	std::cout << "Initial value = " << str << std::endl;
	if (intValue >= ' ' && intValue <= '~')
		std::cout << "Char convertion = " << c << std::endl;
	else if (intValue < 0 || intValue > 126)
		std::cout << "Char convertion = Impossible" << std::endl;
	else
		std::cout << "Char convertion = Non displayable" << std::endl;	
	std::cout << "int convertion = " << intValue << std::endl;
	std::cout << "Float convertion = " << floatValue << ".0f" << std::endl;
	std::cout << "Double convertion = " << doubleValue << ".0" << std::endl;
}

bool	isIntOverflow(std::string str)
{
	long	longValue = atol(str.c_str());
	return (longValue < std::numeric_limits<int>::min() || longValue > std::numeric_limits<int>::max());
}

void	convertFloat(std::string str)
{
	std::stringstream	ss(str);
	
	float	floatValue;
	ss >> floatValue;
	int		intValue = static_cast<int>(floatValue);
	double	doubleValue = static_cast<double>(floatValue);
	char	c = static_cast<char>(floatValue);
	
	std::cout << "Initial value = " << str << std::endl;
	if (floatValue >= ' ' && floatValue <= '~')
		std::cout << "Char convertion = " << c << std::endl;
	else if (floatValue < 0 || floatValue > 126)
		std::cout << "Char convertion = Impossible" << std::endl;
	else
		std::cout << "Char convertion = Non displayable" << std::endl;
	if (!isIntOverflow(str))
		std::cout << "int convertion = " << intValue << std::endl;
	else
		std::cout << "int convertion = IMPOSSIBLE" << std::endl;
	std::cout << "Float convertion = " << floatValue << std::endl;
	std::cout << "Double convertion = " << doubleValue << std::endl;
}

void	convertDouble(std::string str)
{
	double	doubleValue = atof(str.c_str());
	char	c = static_cast<char>(doubleValue);
	int		intValue = static_cast<int>(doubleValue);
	float	floatValue = static_cast<float>(doubleValue);
	
	std::cout << "Initial value = " << str << std::endl;
	if (doubleValue >= ' ' && doubleValue <= '~')
		std::cout << "Char convertion = " << c << std::endl;
	else if (doubleValue < 0 || doubleValue > 126)
		std::cout << "Char convertion = Impossible" << std::endl;
	else
		std::cout << "Char convertion = Non displayable" << std::endl;	
	if (doubleValue >= -2147483648.0f && doubleValue <= 2147483647.0f)
		std::cout << "int convertion = " << intValue << std::endl;
	else
		std::cout << "int convertion = IMPOSSIBLE" << std::endl;
	if (doubleValue >= std::numeric_limits<float>::min() && doubleValue <= std::numeric_limits<float>::max())
		std::cout << "Float convertion = " << floatValue << std::endl;
	else
		std::cout << "Float convertion = IMPOSSIBLE" << std::endl;
	std::cout << "Double convertion = " << doubleValue << std::endl;
}

bool isPseudoFloat(std::string str)
{
	std::string		list[4] = { "-inff", "+inff", "nanf", "inff" };

	for (size_t i = 0; i < 4; ++i)
	{
		if (list[i] == str)
			return (true);
	}
	return (false);
}

void	convertPseudo(std::string str){
	std::cout << "Char convertion = IMPOSSIBLE" << std::endl;
	std::cout << "int convertion = IMPOSSIBLE" << std::endl;
	std::cout << "float convertion = " << ((isPseudoFloat(str))? str : str + "f") << std::endl;
	std::cout << "double convertion = " << ((isPseudoFloat(str))? str.erase(str.length()-1, 1) : str) << std::endl;
}