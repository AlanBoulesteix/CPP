/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:06:20 by aboulest          #+#    #+#             */
/*   Updated: 2023/08/01 08:34:52 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAG_HP 100
#define FRAG_EP 100
#define FRAG_DAMAGE 30

class FragTrap : virtual public ClapTrap {
	
	public:
		
		FragTrap( void );
		FragTrap( std::string name );
		FragTrap( const FragTrap &original );
		~FragTrap( void );

		FragTrap	&operator=( const FragTrap &rhs );

		void		highFivesGuys( void );

	private:
};

#endif