/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:08 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 12:23:16 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal Constructor was called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor was called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &cpyasy){
    this->type = cpyasy.type;
    return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpycons){
    *this = cpycons;
}

std::string WrongAnimal::getType() const{
    return (this->type);
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal Sound" << std::endl;
}
