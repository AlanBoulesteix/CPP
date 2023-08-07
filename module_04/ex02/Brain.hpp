/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:46:29 by alanboulest       #+#    #+#             */
/*   Updated: 2023/08/07 16:38:35 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class   Brain{
    public:

    Brain();
    Brain(const Brain &original);
    ~Brain();
    
    Brain&  operator=(const Brain &rhs);
    
    void    addIdea(std::string idea);
    void    printIdeas(void) const;
    int     getNbIdeas(void) const;
    
    private:
    
    std::string     _ideas[100];
    int             _nbIdeas;
};

#endif