/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:06:16 by aboulest          #+#    #+#             */
/*   Updated: 2023/07/19 11:50:58 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <ostream>

class	Zombie{

	public:
	
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );

	void	annouce( void );
	void	setName( std::string name );
	
	private:

	std::string	_name;
	
};

Zombie* zombieHorde( int N, std::string name );

#endif