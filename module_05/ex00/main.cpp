/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:26 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/06 14:18:57 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("Bureaucrate aux dents longues", 15);
	try
	{
		Bureaucrat b("Bureaucrate ", 1545);
	} 
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 15; i++)
	{
		try
		{
			a.incrementGrade();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}