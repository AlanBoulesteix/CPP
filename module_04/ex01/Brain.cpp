/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:50:51 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/07 16:39:20 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(): _nbIdeas(0){
	std::cout << "Default Constructor Brain called" << std::endl;
};

Brain::Brain(const Brain &original): _nbIdeas(original.getNbIdeas()){
	std::cout << "Copy Constructor Brain called" << std::endl;
	for (int i = 0; i < _nbIdeas; i++)
		_ideas[i] = original._ideas[i];
};

Brain::~Brain(){
	std::cout << "Destructor Brain called" << std::endl;
};

Brain&  Brain::operator=(const Brain &rhs){
    if (this != &rhs)
	{
        _nbIdeas = rhs._nbIdeas;
        for (int i = 0; i < _nbIdeas; i++)
			_ideas[i] = rhs._ideas[i];
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

