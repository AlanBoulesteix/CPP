/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:48:51 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 18:57:06 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Point ab((b.getX() - a.getX()), (b.getY() - b.getY()));
	Point ac((c.getX() - a.getX()), (c.getY() - a.getY())); 
	Point ap((point.getX() - a.getX()), (point.getY() - a.getY()));
	Fixed apab((ap.getX())*(ab.getX()) + (ap.getY())*(ab.getY()));
	Fixed apac((ap.getX())*(ac.getX()) + (ap.getY())*(ac.getY()));
	
	std::cout << "APAB= " << apab << " APAC= " << apac << std::endl;
	return (apab != 0 && apac != 0);
};