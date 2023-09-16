/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:52:34 by aboulest          #+#    #+#             */
/*   Updated: 2023/09/16 16:13:34 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"
#include "Data.hpp"

int main()
{
    Data    *a = new Data("Mass Structure ", 42, true);
    std::cout << *a << std::endl;
    uintptr_t rawptr = Serializer::serialize(a);
    std::cout << "============================" << std::endl;
    Data *b = Serializer::deserialize(rawptr);
    std::cout << *b << std::endl;
    delete a;
    return (0);

}