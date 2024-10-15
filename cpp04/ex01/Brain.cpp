/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:33:28 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/29 22:12:56 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor was called" << std::endl;
    for (int i = 0;i < 100;i++)
    {
        this->ideas[i] = "sleep";
    }
}

Brain::~Brain(){
    std::cout << "Brain Destructor was called" << std::endl;
}

Brain &Brain::operator=(Brain const &cpyasy){
    std::cout << "Brain cpoy assignment was called" << std::endl;
    for (int i = 0; i < 100;i++)
    {
        this->ideas[i] = cpyasy.ideas[i];
    }
    return (*this);
}

Brain::Brain(Brain const &cpycons){
    std::cout << "Brain cpoy constructor was called" << std::endl;
    *this = cpycons;
}
