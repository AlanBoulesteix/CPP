/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:29:10 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/16 15:40:40 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _type("Data"), _nbInfo(42), _crypted(false) {};

Data::Data(const Data& rhs) : _type(rhs.getType()), _nbInfo(rhs.getNbInfo()), _crypted(rhs.getState()) {
    
};

Data&   Data::operator=(const Data &src) {
    (void)src;
    return *this;
};

Data::~Data() {
    
};

Data::Data(std::string type, int nbInfo, bool crypted) : _type(type), _nbInfo(nbInfo), _crypted(crypted) {
    
};

std::string     Data::getType() const {
    return (_type);
};

int             Data::getNbInfo() const {
    return (_nbInfo);
};

bool            Data::getState() const {
    return (_crypted);
};

std::ostream& operator<<(std::ostream & o, Data const & data){
    o << "Data Type: " << data.getType() << std::endl
        << "Data Length: " << data.getNbInfo() << std::endl
        << "Data Encrypted ?: " << (data.getState() ? "Yes" : "No");
    return (o);
};