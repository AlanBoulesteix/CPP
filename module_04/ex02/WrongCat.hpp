/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:52:57 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/03 13:39:51 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class	WrongCat : virtual public WrongAnimal {
	
	public:

	WrongCat();
	WrongCat(const WrongCat &original);
	virtual ~WrongCat();
	
	WrongCat&	operator=(const WrongCat &rhs);

	virtual void	makeSound() const;
	
};

#endif