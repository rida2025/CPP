/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:02:15 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 19:28:04 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    std::cout << "ScavTrap constructor was called from derived class" << std::endl;
    this->name = "unknown";
    Hit_points = 100;
    Energy_point = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    std::cout << "ScavTrap parameters constructor was called from derived class" << std::endl;
    this->name = name;
    this->Hit_points = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor was called from derived class" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &cpyasy){
    std::cout << "ScavTrap copy assignment was called from derived class" << std::endl;
    this->name = cpyasy.name;
    this->Hit_points = cpyasy.Hit_points;
    this->Energy_point = cpyasy.Energy_point;
    this->Attack_damage = cpyasy.Attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &cpycons){
    *this = cpycons;    
}

void ScavTrap::attack(const std::string& target){
    if (this->Energy_point > 0 && this->Hit_points > 0)
    {
        std::cout << this->name << " attacked [" << target << "] causing " << target << " " << this->Attack_damage << " true damage!!!"
        << std::endl;
        Energy_point--;
    }
}

void ScavTrap::guardGate(){
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}
