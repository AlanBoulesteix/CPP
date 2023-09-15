/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:33:32 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/15 11:30:43 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ScalarConverter.hpp"
#include <stdlib.h>

bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);
int		findType(std::string& str);
void	convertInt(std::string str);
void	convertChar(std::string str);
void	convertFloat(std::string str);
void	convertDouble(std::string str);
void	convertPseudo(std::string str);

// void	printAllConvertion(char charV, int intV, float floatV, double doubleV)
// {
	
// }