/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:52:34 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 13:32:02 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main()
{
	std::string	input;
	while (1)
	{
		std::cin >> input;
		ScalarConverter	a(input);
	
		a.convert();
	}
	return (0);
}