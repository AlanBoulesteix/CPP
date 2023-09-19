/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:21:05 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/19 11:03:28 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <unistd.h>
#include <iostream>

int main()
{
	std::srand(time(NULL)); 
    Base	*base1 = generate();
	Base	*base2 = generate();
	Base	*base3 = generate();

    identify(base1);
	identify(base2);
	identify(base3);
	std::cout << "=================" << std::endl;
    identify(*base1);
	identify(*base2);
	identify(*base3);
    
    delete base1;
    delete base2;
    delete base3;
}