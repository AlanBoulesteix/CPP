/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 22:52:43 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/01 23:01:38 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class   WrongAnimal {
    public:

    WrongAnimal();
    WrongAnimal( std::string type );
    WrongAnimal(const WrongAnimal &original);
    ~WrongAnimal();
    
    WrongAnimal& operator=( const WrongAnimal &rhs);
    protected:
  
    std::string   _type;  
};

#endif