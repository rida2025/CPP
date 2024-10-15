/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:53:18 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 19:24:31 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->name = "riiiiida";
    this->Hit_points = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    std::cout << "ClapTrap default constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    this->Hit_points = 10;
    this->Energy_point = 10;
    this->Attack_damage = 0;
    std::cout << "ClapTrap parameter constructor was called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor was called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &cpyasy){
    std::cout << "ClapTrap copy assignment was called" << std::endl;
    this->name = cpyasy.name;
    this->Hit_points = cpyasy.Hit_points;
    this->Energy_point = cpyasy.Energy_point;
    this->Attack_damage = cpyasy.Attack_damage;
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &cpycons){
    std::cout << "ClapTrap copy constructor was called" << std::endl;
    *this = cpycons;
}

void ClapTrap::attack(const std::string& target){
    if (this->Energy_point > 0 && this->Hit_points > 0)
    {
        std::cout << this->name << " attacked " << target << " causing " << target << " " << this->Attack_damage << " points of damage!"
        << std::endl;
        Energy_point--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->Hit_points == 0 || this->Energy_point == 0)
        return ;
    else if (amount > (unsigned int)this->Hit_points)
    {
        Hit_points = 0;
        std::cout << this->name << " recieved " << amount << " points of damage!"
        << std::endl;
    }
    else
    {
        Hit_points -= amount;
        std::cout << this->name << " recieved " << amount << " points of damage!"
        << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->Energy_point > 0 && this->Hit_points > 0)
    {
        std::cout << this->name << " regain " << amount << " points of health"
        << std::endl;
        this->Hit_points += amount;
        this->Energy_point--;
    }
}

int ClapTrap::get_Hit_points(){
    return (this->Hit_points);
}

int ClapTrap::get_Energy_point(){
    return (this->Energy_point);
}

int ClapTrap::get_Attack_damage(){
    return (this->Attack_damage);
}
