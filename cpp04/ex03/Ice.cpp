/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:27:07 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/01 21:11:15 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
    this->_type = "ice";
};

Ice::~Ice(){};

Ice &Ice::operator=(Ice const &cpyasy)
{
    this->_type = cpyasy._type;
    return (*this);
};

AMateria* Ice::clone() const{
    return (new Ice());
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
