/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:29 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 12:29:39 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream & o, Fixed const & fixed){
	o << fixed.toFloat();
	return (o);
};

Fixed::Fixed(void):_n(0){
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed::Fixed(const int integer): _n(integer << _nBits){
	std::cout << "Integer constructor called" << std::endl;
};

Fixed::Fixed(const float flo): _n(roundf(flo * (1 << _nBits))){
	std::cout << "Float constructor called" << std::endl;
};

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
};

Fixed& Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        _n = fixed.getRawBits();
    return (*this);
};

int		Fixed::getRawBits(void) const {
	return (_n);	
};

void	Fixed::setRawBits(int const raw){
	_n = raw;		
};

float	Fixed::toFloat(void) const {
	return ((static_cast<float>(this->getRawBits()) / (1 << this->_nBits)));
};

int		Fixed::toInt(void) const {
	return (_n >> this->_nBits);
};
