/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:16:28 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/19 11:01:35 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdlib.h>

class Base {
    public:
    virtual ~Base(){};
};

class A : virtual public Base {};
class B : virtual public Base {};
class C : virtual public Base {};

Base    *generate(void);
void    identify(Base *p);
void    identify(Base& p);