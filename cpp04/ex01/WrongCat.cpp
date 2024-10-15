/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:12 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 12:23:21 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongAnimal";
    std::cout << "WrongCat Constructor was called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor was called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &cpyasy){
    this->type = cpyasy.type;
    return (*this);
}

WrongCat::WrongCat(WrongCat const &cpycons){
    *this = cpycons;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat Sound" << std::endl;
}