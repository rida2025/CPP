/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:10:29 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 13:54:35 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization(){
    
}

Serialization::Serialization(Serialization const &cpy_cons){
    (void)cpy_cons;
}

Serialization &Serialization::operator=(Serialization const &cpy_asy){
    (void)cpy_asy;
    return (*this);
}

Serialization::~Serialization(){
    
}

uintptr_t Serialization::serialize(Data* ptr){
    uintptr_t data;

    data = reinterpret_cast<uintptr_t>(ptr);
    return data;
}

Data* Serialization::deserialize(uintptr_t raw){
    Data *data;

    data = reinterpret_cast<Data*>(raw);
    return data;
}
