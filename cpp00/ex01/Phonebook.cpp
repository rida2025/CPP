/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:52:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/03/29 17:52:35 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact Phonebook::get_contact(int index){
    return (this->contact[index]);
}

void    Phonebook::set_contact(int index, Contact contact){
    this->contact[index] = contact;
}
