/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:58:07 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 18:52:51 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{
	
	public:
	//Constructor
	Point( void );
	Point( const Fixed x, const Fixed y);
	Point( const Point &original);
	Point( const float x, const float y );
	~Point( void );

	//Overload
	Point	&operator=( const Point &point );
	
	//Methodes
	Fixed	getX( void ) const ;
	Fixed	getY( void ) const ;
	void	setX( const Fixed &x );
	void	setY( const Fixed &y );

	private:
	
	//Attribut
	Fixed	_x;
	Fixed	_y;
};

std::ostream &operator<<( std::ostream &o, Point const &Point );

#endif