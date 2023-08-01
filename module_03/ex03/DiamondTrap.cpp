/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:43:39 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 09:43:30 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("ClapTrap_clap_name"){
	_name = "ClapTrap";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Diamond Default constructor of " << _name << " called" << std::endl;
};

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name"){
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Diamond Default constructor of " << _name << " called" << std::endl;
};

DiamondTrap::DiamondTrap( const DiamondTrap  &original ) : ClapTrap(original._name){
	std::cout << "Diamond copy constructor of " << _name << " called" << std::endl;
	_name = original._name;
	_hitPoint = original._hitPoint;
	_energyPoint = original._energyPoint;
	_attackDamage = original._attackDamage;
};

DiamondTrap::~DiamondTrap( void ){
	std::cout << "Diamond Destructor of " << _name << " called" << std::endl;
};

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap &rhs ){
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
};

void	DiamondTrap::attack( const std::string& target ){
	ScavTrap::attack(target);
};

void	DiamondTrap::whoAmI( void ){
	std::cout << "Oh, hello there, vault hunters! I am the one and only " 
			<< _name << ", your loyal and slightly quirky robot companion!" << std::endl;
	std::cout << "Ps: my vault hunters name is " << ClapTrap::_name << " but i don't want to brag about it" << std::endl;
};