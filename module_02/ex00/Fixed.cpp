

#include "Fixed.hpp"
#include <ostream>
#include <iostream>

Fixed::Fixed(void):_n(0){
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const *fixed):_n(fixed->_n){
    std::cout << "Copy constructor called" << std::endl;
};

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;    
};

Fixed&  Fixed::operator=(Fixed fixed){

};