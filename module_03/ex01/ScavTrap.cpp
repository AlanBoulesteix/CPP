/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:10:54 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/04 11:57:32 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap(){
	std::cout << "ScavTrap default constructor of " << _name << " called" << std::endl;
	_hitPoint = SCAV_HP;
	_energyPoint = SCAV_EP;
	_attackDamage = SCAV_DAMAGE;
};

ScavTrap::ScavTrap( std::string name ): ClapTrap(name){
	std::cout << "ScavTrap default constructor of " << _name << " called" << std::endl;
	_hitPoint = SCAV_HP;
	_energyPoint = SCAV_EP;
	_attackDamage = SCAV_DAMAGE;
};

ScavTrap::ScavTrap( const ScavTrap &scavTrap ): ClapTrap(scavTrap._name){
	std::cout << "Scavtrap copy constructor of " << _name << " called" << std::endl;
	_hitPoint = scavTrap._hitPoint;
	_energyPoint = scavTrap._energyPoint;
	_attackDamage = scavTrap._attackDamage;
};

ScavTrap::~ScavTrap( void ){
	std::cout << "ScavTrap default destructor of " << _name << " called" << std::endl;
};

ScavTrap& ScavTrap::operator=( const ScavTrap &rhs ){
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
};

void	ScavTrap::attack( const std::string& target ){
	if (_energyPoint > 0 && _hitPoint > 0)
	{
		std::cout << "ScavTrap " << _name 
				<< ": attacks " << target
				<< ", causing " << _attackDamage 
				<< " points of damage! " << std::endl;
		_energyPoint--;
	}
	else if (_hitPoint > 0)
		std::cout << "ScavTrap " << _name << ": I dont't have any power left, sorry..." << std::endl;
	else if (_energyPoint > 0)
		std::cout << "ScavTrap " << _name << ": I don't have any HP left, I'm sorry, I'm not able to do anything..." << std::endl;
};

void	ScavTrap::guardGate( void ){
	std::cout << _name << ": MODE GATE KEEPER ACTIVATED." << std::endl
			<< "BE AWARE THAT IF YOU APPROCH MY DOOR , I'LL MAKE SURE YOU WON'T BE A LIVE" << std::endl;
	_name = _name + " (GATEKEEPER MODE)";
	_hitPoint = SCAV_HP * 2;
	_energyPoint = SCAV_EP * 2;
	_attackDamage = SCAV_DAMAGE * 2;
};
