/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:09:16 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 09:38:30 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <ostream>

class	Zombie{

	public:
	
	Zombie( std::string name );
	~Zombie();
	void	announce( void );

	private:
	
	std::string		_name;	
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif