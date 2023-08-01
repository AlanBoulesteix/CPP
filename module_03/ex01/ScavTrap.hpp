/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:00:35 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 08:23:35 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

#define SCAV_HP 100
#define SCAV_EP 50
#define SCAV_DAMAGE 20

class ScavTrap: public ClapTrap{

	public:
	
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap &scavTrap );
	~ScavTrap( void );
	
	ScavTrap& operator=( const ScavTrap &rhs );

	void	attack( const std::string& target );
	void	guardGate( void );
	
	private:

};

#endif