/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:16:28 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/16 18:28:29 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base    *generate(void)
{
    std::srand(time(NULL)); 
	switch (std::rand() % 3) 
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return(NULL);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Object is Type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Object is Type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Object is Type C" << std::endl;
    else
        std::cerr << "Object is from unknowned type" << std::endl;
}

void    identify(Base& p)
{
    Base check;
    try{
        check = dynamic_cast<A&>(p);
        std::cout << "Object is Type A" << std::endl;
        return ;
    }
    catch (std::exception &e){
        (void)e;
    }
    try{
        check = dynamic_cast<B&>(p);
        std::cout << "Object is Type B" << std::endl;
        return ;
    }
        catch (std::exception &e){
        (void)e;
    }
    try{
        check = dynamic_cast<C&>(p);
        std::cout << "Object is Type C" << std::endl;
        return ;
    }
        catch (std::exception &e){
        (void)e;
    }
    std::cerr << "Object is from unknowned type" << std::endl;
}