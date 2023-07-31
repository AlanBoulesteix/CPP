/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:44:25 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/31 09:11:42 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(HPMAX), _energyPoint(EPMAX), _attackDamage(ATTACKDAMAGE){
	std::cout << "Default Constructor called" << std::endl;
};

ClapTrap::~ClapTrap(){
	std::cout << "Default Destructor called" << std::endl;
};

ClapTrap&	operator=( const ClapTrap &rhs ){
	if (this != &clapTrap)
	{
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
};

void	attack( const std::string& target );
void	takeDamage( unsigned int amount );
void	beRepaired( unsigned int amount );