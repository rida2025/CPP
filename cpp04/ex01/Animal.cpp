/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:47 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 11:57:41 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Animal"){
    std::cout << "Animal Constructor was called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal Destructor was called" << std::endl;
}

Animal &Animal::operator=(Animal const &cpyasy){
    this->type = cpyasy.type;
    return (*this);
}

Animal::Animal(Animal const &cpycons){
    *this = cpycons;
}

std::string Animal::getType() const{
    return (this->type);
}

void Animal::makeSound() const{
    std::cout << "Animal Sound" << std::endl;
}
