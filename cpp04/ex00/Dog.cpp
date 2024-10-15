/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:00 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:28:09 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
    this->type = "Dog";
    std::cout << "Dog Constructor was called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog Destructor was called" << std::endl;
}

Dog &Dog::operator=(Dog const &cpyasy){
    this->type = cpyasy.type;
    return (*this);
}

Dog::Dog(Dog const &cpycons){
    *this = cpycons;
}

void Dog::makeSound() const{
    std::cout << "haw haw, haw haw, gherrrrr" << std::endl;
}
