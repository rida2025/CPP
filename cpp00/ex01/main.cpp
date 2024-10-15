/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:29:02 by mel-jira          #+#    #+#             */
/*   Updated: 2024/03/28 23:29:02 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool isOnlySpacesOrEmpty(const std::string str) {
    int i = 0;
    while ((str[i] && (str[i] <= 13 && str[i] >= 9)) || (str[i] == ' ')) {
        i++;
    }
    if (!str[i])
        return true;
    return false;
}

std::string    turntapstospaces(std::string str){
    int i = 0;
    while (str[i])
    {
        if (str[i] == '\t')
            str[i] = ' ';
        i++;
    }
	return (str);
}

bool    checkphonenumber(const std::string str)
{
    int i = 0;
    if (str[i] && str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            break ;
    }
    if (!str[i])
        return true;
    return false;
}

int main(void)
{
    Phonebook phonebook;
    Contact contact;
    int i = 0;
    int num_of_contact = 0;
    std::string input;
    int index = 0;
    std::string name;
    std::string lastname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    std::cout << "enter one of three commands. The program only accepts ADD, SEARCH and EXIT.\n";
    while (1)
    {
        std::cout << "Input: ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            exit(1);
        if (input == "EXIT")
            exit(0);
        else if (input == "ADD")
        {
            std::cout << "name: ";
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
            while (input.empty() || isOnlySpacesOrEmpty(input))
            {
                std::cout << "name: ";
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(1);
            }
            contact.set_name(turntapstospaces(input));
            std::cout << "lastname: ";
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
            while (input.empty() || isOnlySpacesOrEmpty(input))
            {
                std::cout << "lastname: ";
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(1);
            }
            contact.set_lastname(turntapstospaces(input));
            std::cout << "nickname: ";
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
            while (input.empty() || isOnlySpacesOrEmpty(input))
            {
                std::cout << "nickname: ";
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(1);
            }
            contact.set_nickname(turntapstospaces(input));
            std::cout << "phone number: ";
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
            while (input.empty() || isOnlySpacesOrEmpty(input) || !checkphonenumber(input))
            {
                std::cout << "phone number: ";
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(1);
            }
            contact.set_phone_number(turntapstospaces(input));
            std::cout << "darkest secret: ";
            std::getline(std::cin, input);
            if (std::cin.eof())
                exit(1);
            while (input.empty() || isOnlySpacesOrEmpty(input))
            {
                std::cout << "darkest secret: ";
                std::getline(std::cin, input);
                if (std::cin.eof())
                    exit(1);
            }
            contact.set_darkest_secret(turntapstospaces(input));
            phonebook.set_contact(i++, contact);
            if (i == 8)
                i = 0;
            if (num_of_contact < 8)
                num_of_contact++;
        }
        else if (input == "SEARCH")
        {
            if (num_of_contact > 0)
            {
                std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
                std::cout << "---------------------------------------------\n";
                for (int j = 0; j < num_of_contact; ++j)
                {
                    std::cout << std::setw(10) << j << "|" << std::setw(10) << (phonebook.get_contact(j).get_name().length() > 10 ? phonebook.get_contact(j).get_name().substr(0, 9) + "." : phonebook.get_contact(j).get_name())
                    << "|" << std::setw(10) << (phonebook.get_contact(j).get_lastname().length() > 10 ? phonebook.get_contact(j).get_lastname().substr(0, 9) + "." : phonebook.get_contact(j).get_lastname())
                    << "|" << std::setw(10) << (phonebook.get_contact(j).get_nickname().length() > 10 ? phonebook.get_contact(j).get_nickname().substr(0, 9) + "." : phonebook.get_contact(j).get_nickname()) << std::endl;
                }
                std::cout << "index of the entry to display: ";
                std::getline(std::cin, input);
                index = atoi(input.c_str());
                if (std::cin.eof())
                    exit(1);
                if (index < num_of_contact && index >= 0)
                {
                    std::cout << "Index: " << index << std::endl;
                    std::cout << "First Name: " << phonebook.get_contact(index).get_name() << std::endl;
                    std::cout << "Last Name: " << phonebook.get_contact(index).get_lastname() << std::endl;
                    std::cout << "Nickname: " << phonebook.get_contact(index).get_nickname() << std::endl;
                    std::cout << "Phone Number: " << phonebook.get_contact(index).get_phone_number() << std::endl;
                    std::cout << "Darkest Secret: " << phonebook.get_contact(index).get_darkest_secret() << std::endl;
                }
                else
                    std::cout << "index not found" << std::endl;
            }
            else
                std::cout << "the phonebook is empty" << std::endl;
        }
        else
        {
            std::cout << "enter one of three commands. The program only accepts ADD, SEARCH and EXIT.\n";
        }
    }
}
