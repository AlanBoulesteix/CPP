/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:37:30 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/24 17:37:32 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>
#include <iostream>

Fixed::Fixed(void):_n(0){
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
};

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;    
};

Fixed&  Fixed::operator=(const Fixed &fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        _n = fixed.getRawBits();
    return (*this);
};

int     Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_n);
};
void    Fixed::setRawBits(int const raw){
    this->_n = raw;
};