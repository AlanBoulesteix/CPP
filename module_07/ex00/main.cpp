/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:57:51 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/17 21:12:29 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 12;
    int b = 46;

    std::cout << "min renvoi: " << min<int>(a,b) << std::endl;
    std::cout << "max renvoi: " << max<int>(a,b) << std::endl;

    std::cout << "a = " << a << " et b = " << b << std::endl;
    std::cout << "swipe loading..." << std::endl;
    swap<int>(a,b);
    std::cout << "swipe done" << std::endl;
    std::cout << "a = " << a << " et b = " << b << std::endl;
}
