/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:16:28 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/16 18:26:57 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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