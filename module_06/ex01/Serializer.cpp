/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanboulesteix <alanboulesteix@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:00:51 by alanboulest       #+#    #+#             */
/*   Updated: 2023/09/16 16:12:19 by alanboulest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
};

Serializer::~Serializer(){

};

Serializer::Serializer(const Serializer& rhs){
    (void)rhs;
};

Serializer& Serializer::operator=(const Serializer& rhs){
    (void)rhs;
    return (*this);
};

uintptr_t    Serializer::serialize(Data* ptr){
    uintptr_t   rawPtr = reinterpret_cast<uintptr_t>(ptr);
    if (!rawPtr)
        throw Serializer::SerializeError();
    else
        std::cout << "Serialization succeed" << std::endl;
    return (rawPtr);
};

Data*   Serializer::deserialize(uintptr_t raw){
    Data *data = reinterpret_cast<Data*>(raw);
    if (!data)
        throw Serializer::DeserializeError();
    else
        std::cout << "Deserialization succeed" << std::endl;
    return (data);
};
const char* Serializer::SerializeError::what() const throw(){
    return ("Serializion Failed");
};

const char* Serializer::DeserializeError::what() const throw(){
    return ("Deserializion Failed");
};
