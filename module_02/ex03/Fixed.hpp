/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:34 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 16:20:47 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

	public:
	
	//Constructor
	Fixed( void );
	Fixed( const Fixed &fixed );
	Fixed( const int integer );
	Fixed( const float flo );
	~Fixed( void );
	
	//Overload
	Fixed& 	operator=( const Fixed &fixed );
	Fixed& 	operator++( void );
	Fixed& 	operator--( void );
	Fixed 	operator++( int );
	Fixed 	operator--( int );
	Fixed	operator+( const Fixed &fixed ) const ;
	Fixed	operator-( const Fixed &fixed ) const ;
	Fixed	operator*( const Fixed &fixed ) const ;
	Fixed	operator/( const Fixed &fixed ) const ;
	bool	operator<( const Fixed &fixed ) const ;
	bool	operator<=( const Fixed &fixed ) const ;
	bool	operator>( const Fixed &fixed ) const ;
	bool	operator>=( const Fixed &fixed ) const ;
	bool	operator==( const Fixed &fixed ) const ;
	bool	operator!=( const Fixed &fixed ) const ;
	
	//Functions
	int						getRawBits( void ) const;
	void					setRawBits( int const raw );
	float					toFloat( void ) const;
	int						toInt( void ) const;
	static Fixed&			min( Fixed& nb1, Fixed& nb2 );
	static Fixed&			max( Fixed& nb1, Fixed& nb2 );
	static const Fixed&		min( const Fixed& nb1, const Fixed& nb2 );
	static const Fixed&		max( const Fixed& nb1, const Fixed& nb2 );

	private:
	
	//Attributs
	int					_n;
	static const int	_nBits = 8;
};

std::ostream& operator<<(std::ostream & o, Fixed const & fixed);

#endif