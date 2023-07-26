/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:32:36 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/26 16:31:42 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a( 10 );
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "-----------------------------" << std::endl;
	std::cout << "[" << a << ":" << b << "]" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "(a < b)= " << ((a < b) ? "True" : "False")<< std::endl;
	std::cout << "(a <= b)= " << ((a <= b) ? "True" : "False") << std::endl;
	std::cout << "(a > b)= " << ((a > b) ? "True" : "False") << std::endl;
	std::cout << "(a >= b)= " << ((a >= b) ? "True" : "False") << std::endl;
	std::cout << "(a == b)= " << ((a == b) ? "True" : "False") << std::endl;
	std::cout << "(a != b)= " << ((a != b) ? "True" : "False") << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "(a + b)= " << (a + b)<< std::endl;
	std::cout << "(a - b)= " << (a - b) << std::endl;
	std::cout << "(a * b)= " << (a * b) << std::endl;
	std::cout << "(a / b)= " << (a / b) << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "max(a,b)= " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a,b)= " << Fixed::min(a, b) << std::endl;
	std::cout << "const max(a,b)= " << Fixed::max(static_cast<const Fixed>(a), static_cast<const Fixed>(b)) << std::endl;
	std::cout << "const min(a,b)= " << Fixed::min(static_cast<const Fixed>(a), static_cast<const Fixed>(b)) << std::endl;
	std::cout << "-----------------------------" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "--b = " << --b << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "b-- = " << b-- << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "-----------------------------" << std::endl;
	return 0;
}