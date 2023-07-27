/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:29 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/27 17:06:26 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream & o, Fixed const & fixed){
	o << fixed.toFloat();
	return (o);
};

Fixed::Fixed(void):_n(0){
};

Fixed::Fixed(const Fixed &fixed){
	*this = fixed;
};

Fixed::Fixed(const int integer): _n(integer << _nBits){
};

Fixed::Fixed(const float flo): _n(roundf(flo * (1 << _nBits))){
};

Fixed::~Fixed(void){
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

Fixed	&Fixed::operator=(const Fixed &fixed){
    if (this != &fixed)
        _n = fixed.getRawBits();
    return (*this);
};

bool	Fixed::operator>(const Fixed &fixed) const {
	return(this->toFloat() > fixed.toFloat());
};

bool	Fixed::operator>=(const Fixed &fixed) const {
	return(this->toFloat() >= fixed.toFloat());
};

bool	Fixed::operator<(const Fixed &fixed) const {
	return(this->toFloat() < fixed.toFloat());
};

bool	Fixed::operator<=(const Fixed &fixed) const {
	return(this->toFloat() <= fixed.toFloat());
};

bool	Fixed::operator==(const Fixed &fixed) const {
	return(this->toFloat() == fixed.toFloat());
};

bool	Fixed::operator!=(const Fixed &fixed) const {
	return(this->toFloat() != fixed.toFloat());
};

Fixed	Fixed::operator+(const Fixed &fixed ) const {
	return (Fixed(this->toFloat() + fixed.toFloat()));
};

Fixed	Fixed::operator-(const Fixed &fixed ) const {
	return (Fixed(this->toFloat() - fixed.toFloat()));
};

Fixed	Fixed::operator*(const Fixed &fixed ) const {
	return (Fixed(this->toFloat() * fixed.toFloat()));
};

Fixed	Fixed::operator/(const Fixed &fixed ) const {
	if (fixed.getRawBits() == 0)
	{
		std::cerr << "Divinding by 0 is not possbile" << std::endl;
		return (this->toFloat());
	}
	return ( (this->toFloat() / fixed.toFloat()));
};

const Fixed	&Fixed::min( const Fixed& nb1, const Fixed& nb2 ){
	return (nb1 < nb2 ? nb1 : nb2);
};

const Fixed	&Fixed::max( const Fixed &nb1, const Fixed &nb2 ){
	return (nb1 > nb2 ? nb1 : nb2);
};

Fixed	&Fixed::min( Fixed& nb1, Fixed& nb2 ){
	return (nb1 < nb2 ? nb1 : nb2);
};

Fixed	&Fixed::max( Fixed& nb1, Fixed& nb2 ){
	return (nb1 > nb2 ? nb1 : nb2);
};


Fixed& 	Fixed::operator++( void ){
	_n++;
	return(*this);
};

Fixed& 	Fixed::operator--( void ){
	_n--;
	return(*this);
};

Fixed 	Fixed::operator++( int ){
	Fixed tmp(*this);

	++_n;
	return(tmp);
};

Fixed 	Fixed::operator--( int ){
	Fixed tmp(*this);

	--_n;
	return(tmp);
};
