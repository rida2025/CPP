/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:56 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/02 12:29:49 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
    this->ptr = new Brain();
    this->type = "Cat";
    std::cout << "Cat Constructor was called" << std::endl;
}

Cat::~Cat(){
    delete ptr;
    std::cout << "Cat Destructor was called" << std::endl;
}

Cat &Cat::operator=(Cat const &cpyasy){
    this->type = cpyasy.type;
    delete ptr;
    ptr = new Brain(*cpyasy.ptr);
    return (*this);
}

Cat::Cat(Cat const &cpycons){
    *this = cpycons;
}

void Cat::makeSound() const{
    std::cout << "Meow MMMMeeeeeooooow" << std::endl;
}
