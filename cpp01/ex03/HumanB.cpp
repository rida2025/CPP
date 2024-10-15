/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:53:47 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/20 14:10:23 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB(){
}

void HumanB::attack(){
    if (!weapon)
    {
        std::cout << "there is no weapon"<< std::endl;
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon){
    this->weapon = &weapon;
}
