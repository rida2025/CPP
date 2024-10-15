/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:49:05 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/20 14:34:16 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    filter(std::string level)
{
    Harl obj;
    std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && level != arr[i])
        i++;
    switch(i)
    {
        case 0:
        obj.complain(arr[0]);
        std::cout << std::endl;
        
        case 1:
        obj.complain(arr[1]);
        std::cout << std::endl;

        case 2:
        obj.complain(arr[2]);
        std::cout << std::endl;

        case 3:
        obj.complain(arr[3]);
        std::cout << std::endl;
        break;
        
        default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        exit(1);
    filter((std::string)argv[1]);
    return 0;
}