/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:16:08 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/26 14:48:58 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstdlib>


int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "Error: Wrong amount of argument, please enter only one argument" <<  std::endl;
		return (1);
	}
	try {
		RPN	rpn;
		int	rtn;
		
		rtn = rpn.rpn(std::string(av[1]));
		std::cout << rtn << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

}