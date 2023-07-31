/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:31:47 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/31 16:40:07 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FragTrap Default Constructor of " << _name << " called" << std::endl;	
};

FragTrap::FragTrap(std::string name): ClapTrap(name){
	std::cout << "FragTrap Default Constructor of " << _name << " called" << std::endl;
	_hitPoint = FRAG_HP;
	_energyPoint = FRAG_EP;
	_attackDamage = FRAG_DAMAGE;
};

FragTrap::FragTrap(const FragTrap &original): ClapTrap(original._name){
	_hitPoint = original._hitPoint;
	_energyPoint = original._energyPoint;
	_attackDamage = original._attackDamage;
	std::cout << "FragTrap Copy Constructor of " << _name << " called" << std::endl;
};

FragTrap::~FragTrap(void){
	std::cout << "FragTrap Default Destructor of " << _name << " called" << std::endl;
};

FragTrap	&FragTrap::operator=( const FragTrap &rhs ){
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoint = rhs._hitPoint;
		_energyPoint = rhs._energyPoint;
		_attackDamage = rhs._attackDamage;
	}
	return (*this);
};

void		FragTrap::highFivesGuys(void){
	std::string	input;
	
	std::cout << _name << ": HIGT FIVE ?: ";
	getline(std::cin, input);
	if (input == "Yes" || input == "yes" || input == "y" || input == "Y" || input == "Yes")
		std::cout << "HELL YEAH !!" << std::endl;
	else if (std::cin.eof())
		std::cout << std::endl << "♩ I don't need a man ♩" << std::endl;
	else
		std::cout << "Oh, well then... I understand, I guess. Sniff... Robots have feelings too, you know. But hey, " << std::endl
		<< "I'll keep my chin up and continue being awesome! Cheer up, friends! Uh, I mean... Cheer up, circuits!" << std::endl
		<< _name <<" tries to mask his disappointment while attempting to stay optimistic." << std::endl;
};
