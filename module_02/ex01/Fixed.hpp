/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:34 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/24 19:16:26 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

	public:
	
	//Constructor
	Fixed( void );
	Fixed( const Fixed &fixed);
	Fixed( const int integer );
	Fixed( const float flo);
	~Fixed( void );
	
	//Overload
	Fixed& 	operator=(const Fixed &fixed);
	
	//Functions
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	private:
	
	//Attributs
	int	_n;
	int	_nBits = 8;
};

std::ostream& operator<<(std::ostream & o, Fixed const & fixed);

#endif