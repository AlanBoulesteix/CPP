/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 08:44:27 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/04 11:42:42 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define HPMAX 10
# define EPMAX 10
# define ATTACKDAMAGE 0

class ClapTrap{

	public:
	
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap &original );
	~ClapTrap( void );

	ClapTrap&	operator=( const ClapTrap &rhs );
	
	int		getDamage( void ) const;
	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	protected:

	std::string		_name;
	int				_hitPoint;
	int				_energyPoint;
	int				_attackDamage;
};

#endif