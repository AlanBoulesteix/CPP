/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:44:25 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/31 15:29:11 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("ClapTrap"), _hitPoint(HPMAX), _energyPoint(EPMAX), _attackDamage(ATTACKDAMAGE){
	std::cout << "Default Constructor of " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(HPMAX), _energyPoint(EPMAX), _attackDamage(ATTACKDAMAGE){
	std::cout << "Default Constructor of " << _name << " called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &original){
	*this = original;
	std::cout << "Copy Constructor of " << _name << " called" << std::endl;
};

ClapTrap::~ClapTrap( void ){
	std::cout << "Default Destructor of " << _name << " called" << std::endl;
};

ClapTrap&	ClapTrap::operator=( const ClapTrap &rhs ){
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
};

int		ClapTrap::getDamage( void ) const {
	return (_attackDamage);
}

void	ClapTrap::attack( const std::string& target ){

	if (_energyPoint > 0 && _hitPoint > 0)
	{
		std::cout << "ClapTrap " << _name 
				<< ": attacks " << target
				<< ", causing " << _attackDamage 
				<< " points of damage! " << std::endl;
		_energyPoint--;
	}
	else if (_hitPoint > 0)
		std::cout << "ClapTrap " << _name << ": Oops ! I dont't have any power left." << std::endl;
	else if (_energyPoint > 0)
		std::cout << "ClapTrap " << _name << ": I don't have any HP left, I can do s*** !" << std::endl;
};

void	ClapTrap::takeDamage( unsigned int amount ){
	if (_hitPoint > 0)
	{
		std::cout << "ClapTrap " << _name 
				<< ": took " << amount
				<< " points of damage! " << std::endl;
		_hitPoint -= amount;
	}
	else if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << ": I'm already dead and you still want to hit me ?!" << std::endl;
};

void	ClapTrap::beRepaired( unsigned int amount ){
	if (_energyPoint > 0 && _hitPoint > 0)
	{
		std::cout << "ClapTrap " << _name 
				<< ": repair himself " << amount
				<< "HP have been add " << std::endl;
		_energyPoint--;
	}
	else if (_hitPoint > 0)
		std::cout << "ClapTrap " << _name << ": Oops ! I dont't have any power left." << std::endl;
	else if (_energyPoint > 0)
		std::cout << "ClapTrap " << _name << ": I don't have any HP left, I'm not able to repair myself !" << std::endl;
};
