/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:19:47 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/19 13:27:01 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	convertChar(std::string str)
{
	char	c = str[0];
	int		intValue = static_cast<int>(c) ;
	float	floatValue = static_cast<float>(intValue);
	double	doubleValue = static_cast<double>(intValue);
	
	std::cout << "Initial value = " << str << std::endl;
	std::cout << "Char convertion = " << c << std::endl;
	std::cout << "int convertion = " << intValue << std::endl;
	std::cout << "Float convertion = " << floatValue << ".0f" << std::endl;
	std::cout << "Double convertion = " << doubleValue << ".0" << std::endl;
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
		std::cout << "Char convertion = IMPOSSIBLE" << std::endl;
	else
		std::cout << "Char convertion = Non displayable" << std::endl;	
	std::cout << "int convertion = " << intValue << std::endl;
	std::cout << "Float convertion = " << floatValue << ".0f" << std::endl;
	std::cout << "Double convertion = " << doubleValue << ".0" << std::endl;
}


void	convertFloat(std::string str)
{
	std::stringstream	ss(str);
	if (isFloatOverflow(str))
	{
		std::cerr << "IMPOSSIBLE" << std::endl << "Could not convert" << std::endl;
		return ;
	}
	float	floatValue;
	ss >> floatValue;
	int		intValue = static_cast<int>(floatValue);
	double	doubleValue = static_cast<double>(floatValue);
	char	c = static_cast<char>(floatValue);
	
	std::cout << "Initial value = " << str << std::endl;
	if (floatValue >= ' ' && floatValue <= '~')
		std::cout << "Char convertion = " << c << std::endl;
	else if (floatValue < 0 || floatValue > 126)
		std::cout << "Char convertion = IMPOSSIBLE" << std::endl;
	else
		std::cout << "Char convertion = Non displayable" << std::endl;
	if (!isIntOverflow(str))
		std::cout << "int convertion = " << intValue << std::endl;
	else
		std::cout << "int convertion = IMPOSSIBLE" << std::endl;
	std::cout << "Float convertion = " << floatValue << (hasADotFloat(intValue, floatValue) ? ".0f" : "f") << std::endl;
	std::cout << "Double convertion = " << doubleValue << (hasADotFloat(intValue, floatValue) ? ".0" : "") << std::endl;
}

void	convertDouble(std::string str)
{
	double	doubleValue = atof(str.c_str());
	char	c = static_cast<char>(doubleValue);
	int		intValue = static_cast<int>(doubleValue);
	float	floatValue = static_cast<float>(doubleValue);
	
	if (isDoubleOverflow(str))
	{
		std::cerr << "IMPOSSIBLE" << std::endl << "Could not convert" << std::endl;
		return ;
	}
	std::cout << "Initial value = " << str << std::endl;
	if (doubleValue >= ' ' && doubleValue <= '~')
		std::cout << "Char convertion = " << c << std::endl;
	else if (doubleValue < 0 || doubleValue > 126)
		std::cout << "Char convertion = IMPOSSIBLE" << std::endl;
	else
		std::cout << "Char convertion = Non displayable" << std::endl;	
	if (doubleValue >= -2147483648.0 && doubleValue <= 2147483647.0)
		std::cout << "int convertion = " << intValue << std::endl;
	else
		std::cout << "int convertion = IMPOSSIBLE" << std::endl;
	if (doubleValue >= std::numeric_limits<float>::min() && doubleValue <= std::numeric_limits<float>::max())
		std::cout << "Float convertion = " << floatValue << (hasADotFloat(intValue, floatValue) ? ".0f" : "f") << std::endl;
	else
		std::cout << "Float convertion = IMPOSSIBLE" << std::endl;
	std::cout << "Double convertion = " << doubleValue << (hasADotFloat(intValue, floatValue) ? ".0" : "") << std::endl;
}

void	convertPseudo(std::string str){
	std::cout << "Char convertion = IMPOSSIBLE" << std::endl;
	std::cout << "int convertion = IMPOSSIBLE" << std::endl;
	std::cout << "float convertion = " << ((isPseudoFloat(str))? str : str + "f") << std::endl;
	std::cout << "double convertion = " << ((isPseudoFloat(str))? str.erase(str.length()-1, 1) : str) << std::endl;
}

