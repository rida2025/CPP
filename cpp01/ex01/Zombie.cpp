/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:20:07 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/02 23:41:06 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

void Zombie::set_name(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

void    Zombie::announce( void ) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}