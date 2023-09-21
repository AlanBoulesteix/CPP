/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/20 14:07:29 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

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
		else if (str[i] == 'f' || str[i] == 'F')
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
		else if (str[i] == 'f' || str[i] == 'F')
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

bool	hasADotFloat(int intValue, float floatValue)
{
	std::stringstream sI;
	std::stringstream sF;

	sI << intValue;
	sF << floatValue;
	return (sI.str() == sF.str());
}

bool	isIntOverflow(std::string str)
{
	long	longValue = atol(str.c_str());
	return (longValue < std::numeric_limits<int>::min() || longValue > std::numeric_limits<int>::max());
}

bool isFloatOverflow(std::string str)
{
	double	doubleValue = atof(str.c_str());
	return (doubleValue < std::numeric_limits<float>::min() || doubleValue > std::numeric_limits<float>::max());
}

bool	isDoubleOverflow(std::string str)
{
	long double lDoubleValue = std::strtold(str.c_str(), NULL);
	return (lDoubleValue < std::numeric_limits<double>::min() || lDoubleValue > std::numeric_limits<double>::max());
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
