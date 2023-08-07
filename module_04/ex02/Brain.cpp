/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:50:51 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/07 11:06:18 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(): _nbIdeas(0){
    
};

Brain::Brain(const Brain &original): _nbIdeas(original.getNbIdeas()){
    
};

Brain::~Brain(){
    
};

Brain&  Brain::operator=(const Brain &rhs){
    if (this != &rhs)
	{
        _ideas[0] = rhs._ideas[0];
        _nbIdeas = rhs._nbIdeas;
	}
    return (*this);
};

void    Brain::addIdea(std::string idea){
    _ideas[_nbIdeas % 100] = idea;
    _nbIdeas++;
};

void    Brain::printIdeas(void) const{
	if (_nbIdeas == 0)
		std::cout << "There is no brilliant idea in this brain" << std::endl;
    for (int i = 0; i < _nbIdeas; i++)
        std::cout << _ideas[i] << std::endl;    
};

int     Brain::getNbIdeas(void) const{
    return (_nbIdeas);
};

