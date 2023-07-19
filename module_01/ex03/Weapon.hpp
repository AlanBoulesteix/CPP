/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:56:08 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 16:01:47 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <ostream>
#include <iostream>

class Weapon
{
	public:
	
		Weapon();
		Weapon( std::string name );
		~Weapon();

	std::string	getType( void );
	void		setType( std::string type );

	private:
	
	std::string	_type;
};

#endif