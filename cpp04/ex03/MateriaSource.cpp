/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:51:02 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:35:46 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0;i < 4;i++)
    {
        this->inventory[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    for (int i = 0;i < 4;i++)
    {
        if(this->inventory[i] != NULL){
            delete this->inventory[i];
        }
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &cpyasy){
    for (int i = 0;i < 4;i++)
    {
        if(this->inventory[i] != NULL) 
            delete this->inventory[i];
        if (cpyasy.inventory[i] != NULL)
            this->inventory[i] = (cpyasy.inventory[i])->clone();
    }
    return (*this);
}

MateriaSource::MateriaSource(MateriaSource const &cpycons){
    *this = cpycons;
}

void MateriaSource::learnMateria(AMateria* materia){
    if (!materia)
        return ;
    for (int i = 0;i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = materia;
            return ;
        }
    }
    delete materia;
}

AMateria*   MateriaSource::createMateria(std::string const & type){
    for (int i= 0;i < 4;i++)
    {
        if (this->inventory[i] != NULL)
        {
            if ((this->inventory[i])->getType() == type)
                return ((this->inventory[i])->clone());
        }
    }
    return (0);
}
