/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:39:26 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 18:07:20 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <ostream>
#include <iostream>

class HumanA{
	
	public:
	
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );

		void	attack( void );

	private:

	std::string	_name;
	Weapon		&_weapon;

};


#endif