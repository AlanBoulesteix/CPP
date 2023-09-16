/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:21:05 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/16 18:31:21 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <unistd.h>

int main()
{
    Base	*base1 = generate();
    sleep(1);
	Base	*base2 = generate();
    sleep(1);
	Base	*base3 = generate();

    identify(base1);
	identify(base2);
	identify(base3);

    identify(*base1);
	identify(*base2);
	identify(*base3);
    
    delete base1;
    delete base2;
    delete base3;
}