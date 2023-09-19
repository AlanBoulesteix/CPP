/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulest <aboulest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:54:15 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/19 10:55:44 by aboulest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {
    
    private:

    Serializer();
    ~Serializer();
    Serializer(const Serializer& rhs);
    Serializer& operator=(const Serializer& rhs);

    public:
    
    static uintptr_t    serialize(Data* ptr);
    static Data*        deserialize(uintptr_t raw);
    
    class SerializeError : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class DeserializeError : public std::exception {
        public:
            virtual const char* what() const throw();
    };
}; 