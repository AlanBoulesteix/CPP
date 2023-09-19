/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/19 13:18:49 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScalarConverter.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <limits>
#include <cstdlib>

bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);
int		findType(std::string& str);
void	convertInt(std::string str);
void	convertChar(std::string str);
void	convertFloat(std::string str);
void	convertDouble(std::string str);
void	convertPseudo(std::string str);
bool	isIntOverflow(std::string str);
bool	isFloatOverflow(std::string str);
bool	isDoubleOverflow(std::string str);
bool	hasADotFloat(int intValue, float floatValue);
bool	isPseudoFloat(std::string str);

