/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:48:51 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/27 15:18:34 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	abs(Fixed nb)
{
	return ((nb < 0 ? nb * (-1) : nb));
}

Fixed	area( Point const p1, Point const p2, Point const p3){
	Fixed a;

	a = (p1.getX()*(p2.getY()-p3.getY())) + (p2.getX()*(p3.getY()-p1.getY())) + (p3.getX()*(p1.getY() - p2.getY()));
	return (abs(a)/2);
};

bool bsp( Point const a, Point const b, Point const c, Point const point){

	Fixed abc, abpoint, acpoint, bcpoint;
		
	abc = area(a, b, c);
	abpoint = area(a, b, point);
	acpoint = area(a, c, point);
	bcpoint = area(b, c, point);
	if (abc == 0 || abpoint == 0 || acpoint == 0 || bcpoint == 0)
		return (false);
	if (abpoint + acpoint + bcpoint == abc)
		return (true);
	return (false);
}; 