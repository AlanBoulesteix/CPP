/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:52:34 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/12 18:38:23 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main()
{
	std::string	input;
	while (1)
	{
		std::cin >> input;
		ScalarConverter::convert(input);	
	}
	return (0);
}