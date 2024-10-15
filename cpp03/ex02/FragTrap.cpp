/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:15:56 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 19:27:10 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    std::cout << "FragTrap default constructor was called from derived class !" << std::endl;
    this->name = "unknown";
    this->Hit_points = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    std::cout << "FragTrap parameters constructor was called from derived class !" << std::endl;
    this->name = name;
    this->Hit_points = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor was called from derived class !" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &cpyasy){
    std::cout << "FragTrap copy assignment was called from a derived class !" << std::endl;
    this->name = cpyasy.name;
    this->Hit_points = cpyasy.Hit_points;
    this->Energy_point = cpyasy.Energy_point;
    this->Attack_damage = cpyasy.Attack_damage;
    return (*this);
}

FragTrap::FragTrap(FragTrap const &cpycons){
    *this = cpycons;
}

void FragTrap::highFivesGuys(void){
    std::cout << "high Fives Guys" << std::endl;
}
