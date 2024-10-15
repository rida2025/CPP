/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:29:56 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/26 16:14:55 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(){
    this->type = "Cat";
    std::cout << "Cat Constructor was called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat Destructor was called" << std::endl;
}

Cat &Cat::operator=(Cat const &cpyasy){
    this->type = cpyasy.type;
    return (*this);
}

Cat::Cat(Cat const &cpycons){
    *this = cpycons;
}

void Cat::makeSound() const{
    std::cout << "Meow MMMMeeeeeooooow" << std::endl;
}
