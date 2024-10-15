/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:35:27 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/02 10:16:19 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("default"){

}

AMateria::AMateria(std::string const & type): _type(type){
}

AMateria::~AMateria(){
}

AMateria::AMateria(AMateria const &cpycons): _type(cpycons._type){
}

void AMateria::use(ICharacter& target){
    (void)target;
}

std::string const &AMateria::getType() const{
    return (this->_type);
}
