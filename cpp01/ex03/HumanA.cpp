/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:53:06 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/03 18:30:15 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w): weapon(w)
{
    this->name = name;
}

HumanA::~HumanA(){
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
        