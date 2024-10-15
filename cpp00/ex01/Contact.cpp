/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:50:57 by mel-jira          #+#    #+#             */
/*   Updated: 2024/03/29 17:52:03 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
 
std::string Contact::get_name(void)
{
    return (name);
}

std::string Contact::get_lastname(void)
{
    return (lastname);
}

std::string Contact::get_nickname(void)
{
    return (nickname);
}

std::string Contact::get_phone_number(void)
{
    return (phone_number);
}

std::string Contact::get_darkest_secret(void)
{
    return (darkest_secret);
}

void Contact::set_name(std::string input)
{
    name = input;
}

void Contact::set_lastname(std::string input)
{
    lastname = input;
}

void Contact::set_nickname(std::string input)
{
    nickname = input;
}

void Contact::set_phone_number(std::string input)
{
    phone_number = input;
}

void Contact::set_darkest_secret(std::string input)
{
    darkest_secret = input;
}
