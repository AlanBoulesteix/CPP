/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:29 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/24 19:24:45 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// std::ostream& operator<<(std::ostream & o, Fixed const & fixed){
// 	o << 
// };

Fixed::Fixed(void):_n(0){
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed::Fixed(const int integer){
	std::cout << "Integer constructor called" << std::endl;
};

Fixed::Fixed(const float flo){
	std::cout << "Float constructor called" << std::endl;
};

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
};