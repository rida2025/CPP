/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 10:05:35 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 19:29:13 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): FragTrap(), ScavTrap(){
    std::cout << "DiamondTrap constructor was called" << std::endl;
    ClapTrap::name = "default_Clap_name";
    this->name = "default";
    this->Hit_points = 100;
    this->Energy_point = 50;
    this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name): FragTrap(name + "_Clap_name"), ScavTrap(name + "_Clap_name"){
    this->name = name;
    this->Hit_points = 100;
    this->Energy_point = 50;
    this->Attack_damage = 30;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor was called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &cpyasy){
    std::cout << "DiamondTrap copy assignment was called" << std::endl;
    this->name = cpyasy.name;
    this->Hit_points = cpyasy.Hit_points;
    this->Energy_point = cpyasy.Energy_point;
    this->Attack_damage = cpyasy.Attack_damage;
    return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpycons): FragTrap(cpycons), ScavTrap(cpycons){
    std::cout << "DiamondTrap copy constructor was called" << std::endl;
    *this = cpycons;
}

void DiamondTrap::whoAmI(){
    std::cout << "my name: " << this->name << " ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}
