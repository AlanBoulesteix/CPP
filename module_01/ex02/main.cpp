/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:27:31 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 14:44:21 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ostream>

int	main(void){
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	
	std::cout << "\033[1;32mAddress of string: \033[0m" << &string << std::endl
			<< "\033[1;33mAddress of stringPTR: \033[0m" << &stringPTR << std::endl
			<< "\033[1;34mAddress of stringREf: \033[0m" << &stringREF << std::endl
			<< std::endl;

	std::cout << "\033[1;32mValue of string: \033[0m" << string << std::endl
			<< "\033[1;33mValue of stringPTR: \033[0m" << *stringPTR << std::endl
			<< "\033[1;34mValue of stringREf: \033[0m" << stringREF << std::endl;	
};