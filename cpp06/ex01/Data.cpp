/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:17:02 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 13:47:08 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(){
    number = 0;
}

Data::~Data(){

}

Data::Data(Data const &cpy_cons){
    *this = cpy_cons;
}

Data &Data::operator=(Data const &cpy_asy){
    this->number = cpy_asy.number;
    return (*this);
}

int Data::getNumber(){
    return (this->number);
}

void Data::setNumber(int nbr){
    this->number = nbr;
}
