/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:07:47 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/16 15:36:38 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Data {
    private:
        const std::string     _type;
        const int             _nbInfo;
        const bool            _crypted;

        Data();
        Data(const Data& rhs);
        Data&   operator=(const Data &src);
        
    public:
    
        Data(std::string type, int nbInfo, bool crypted);
        ~Data();
        std::string     getType() const;
        int             getNbInfo() const;
        bool            getState() const;
};

std::ostream& operator<<(std::ostream & o, Data const & data);