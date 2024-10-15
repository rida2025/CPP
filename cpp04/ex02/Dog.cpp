/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:00 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/02 12:30:00 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
    this->ptr = new Brain();
    this->type = "Dog";
    std::cout << "Dog Constructor was called" << std::endl;
}

Dog::~Dog(){
    delete ptr;
    std::cout << "Dog Destructor was called" << std::endl;
}

Dog &Dog::operator=(Dog const &cpyasy){
    this->type = cpyasy.type;
    delete this->ptr;
    this->ptr = new Brain(*cpyasy.ptr);
    return (*this);
}

Dog::Dog(Dog const &cpycons){
    *this = cpycons;
}

void Dog::makeSound() const{
    std::cout << "haw haw, haw haw, gherrrrr" << std::endl;
}
