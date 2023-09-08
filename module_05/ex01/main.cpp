/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:00:26 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/08 10:53:34 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	testInvalidForm()
{
	try{
		Form fInvalid1("Invalid", false, 0, 0);
		Form fInvalid2("Invalid", false, 151, 151);		
	}
	catch ( std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void	bureaucratTrySign()
{
	Bureaucrat b1("The Best", 1);
	Bureaucrat b150("The Worst", 150);
	Form f1("#1", false, 1, 1);
	Form f150("#150", false, 150, 150);
	
	b150.signForm(f1);
	b1.signForm(f1);
	b1.signForm(f150);
}

int main()
{
	Form form1("Test", false, 1, 1);
	Form form2(form1);
	std::cout << form1 << std::endl;
	std::cout << "===================" << std::endl;
	testInvalidForm();
	std::cout << "===================" << std::endl;
	bureaucratTrySign();
	std::cout << "===================" << std::endl;
}
