/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 09:32:21 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/02 17:08:26 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default_name"), num_item(0){  
    for (int i = 0;i < 4;i++){
        inventory[i] = NULL;
    }
    for (int i = 0;i < 1024;i++){
        garbage_collector[i] = NULL;
    }
}

Character::Character(std::string name): _name(name), num_item(0){
    for (int i = 0;i < 4;i++){
        inventory[i] = NULL;
    }
    for (int i = 0;i < 1024;i++){
        garbage_collector[i] = NULL;
    }
}

Character::~Character(){
    for (int i = 0;i < 4;i++){
        if (this->inventory[i])
            delete inventory[i];
    }
    free_garbage_collector();
}

Character &Character::operator=(Character const &cpyasy){
    for (int i = 0;i < 4;i++){
        delete inventory[i];
    }
    for (int i = 0;i < 4;i++){
        if (this->inventory[i] != NULL)
            inventory[i] = cpyasy.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    return (*this);
}

Character::Character(Character const &cpycons){
    *this = cpycons;
}

std::string const &Character::getName() const{
    return (this->_name);
}

void Character::equip(AMateria* m){
    if (!m)
        return ;
    for (int i = 0;i < 4;i++){
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m->clone();
            break ;
        }
    }
    this->garbage_collector[this->num_item] = m;
    this->num_item++;
}

void Character::unequip(int idx){
    if (idx > 3 || idx < 0)
        return ;
    for (int i = 0;i < 4;i++){
        if (idx == i)
        {
            this->garbage_collector[this->num_item] = inventory[i];
            this->num_item++;
            inventory[i] = NULL;
            return ;
        }
    }
}

void Character::use(int idx, ICharacter& target){
     if (idx > 3 || idx < 0 || this->inventory[idx] == NULL)
        return ;
    (this->inventory[idx])->use(target); 
}

void Character::free_garbage_collector(){
    int i= 0;
    while (i < this->num_item)
    {
        if (garbage_collector[i] != NULL)
            delete garbage_collector[i];
        i++;
    }
    this->num_item = 0;
}
