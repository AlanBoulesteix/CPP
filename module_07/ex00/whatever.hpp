/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:52:13 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/17 21:06:02 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void    swap(T& x, T& y){
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
}
template< typename T >
T       min(const T &x, const T &y) 
{
    return (x < y ? x : y);
}

template< typename T >
T       max(const T &x, const T &y)
{
    return (x > y ? x : y);
}
