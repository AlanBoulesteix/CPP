/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:58:04 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 18:32:01 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream &operator<<(std::ostream &o, Point const &Point){
	o << "(" << Point.getX() << ":" << Point.getY() << ")";
	return (o);
};

Point::Point(void):_x(Fixed()), _y(Fixed()) {
	
};

Point::Point(const Fixed x, const Fixed y):_x(x), _y(y) {
	
};

Point::Point(const float x, const float y):_x(Fixed(x)), _y(Fixed(y)) {
	
};

Point::Point(const Point &original) {
	*this = original;
}

Point::~Point(void){
	
};

Point	&Point::operator=(const Point &point){
	if (this != &point)
	{
		_x = point._x;
		_y = point._y;
	}
	return (*this);
};

Fixed	Point::getX(void) const {
	return (_x);
};

Fixed	Point::getY(void) const {
	return (_y);
};

void	Point::setX(const Fixed &x){
	_x = x;
};

void	Point::setY(const Fixed &y){
	_y = y;	
};
