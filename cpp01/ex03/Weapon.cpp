/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:52:44 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/03 17:56:11 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
    this->type = weapon;
}

Weapon::~Weapon(){
}
std::string Weapon::getType(void) const{
    return (this->type);
}

void Weapon::setType(std::string type){
    this->type = type;
}
