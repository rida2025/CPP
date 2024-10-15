/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:28:56 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/02 18:08:51 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            std::string str = argv[i];
            for (int j = 0; str[j] != '\0'; j++)
				std::cout << (char) toupper(str[j]);
        }
        std::cout << std::endl;
    }
    return 0;
}