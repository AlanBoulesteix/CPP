/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:48:51 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/27 17:28:45 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const p){

	
	Fixed w1 ((a.getX()*(c.getY()-a.getY())+(p.getY()-a.getY())*(c.getX()-a.getX())-p.getX()*(c.getY()-a.getY()))
			/((b.getY()-a.getY())*(c.getX()-a.getX())-(b.getX()-a.getX())*(c.getY()-a.getY())));
	Fixed w2 ((p.getY()-a.getY()-w1 * (b.getY()-a.getY()))/(c.getY()-a.getY()));

	if (w1 >= 0 && w2 >= 0 && (w1 + w2)<= 1)
		return (true);
	return (false);
}; 