/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:43:41 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 09:22:51 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
	
	public:

	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( const DiamondTrap  &original );
	~DiamondTrap( void );

	DiamondTrap&	operator=( const DiamondTrap &rhs );
	
	void	whoAmI( void );
	void	attack( const std::string& target );
	
	private:
	
	std::string _name;
};

#endif