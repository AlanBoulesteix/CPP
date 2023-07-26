/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:17:47 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 18:53:22 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void	exempleOk(void){
	Point a(1,2), b(3,4), c(5,6), point(2,5);
	std::cout << "Le point" << point
			<< " est il dans le triangle ayant pour sommet :" << std::endl
			<< "A" << a << " B" << b << " C" << c << " ?" << std::endl;
	std::cout << (bsp(a, b, c, point) ? "Oui" : "Non") << std::endl;
};

void	exempleKo(void){
	Point a(1,2), b(3,4), c(5,6), point(7,8);
	std::cout << "Le point" << point
			<< " est il dans le triangle ayant pour sommet :" << std::endl
			<< "A" << a << " B" << b << " C" << c << " ?" << std::endl;
	std::cout << (bsp(a, b, c, point) ? "Oui" : "Non") << std::endl;
};

int main(void)
{
	exempleOk();
	exempleKo();
}