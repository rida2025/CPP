/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:04:08 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/20 14:39:37 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde;

    horde = zombieHorde(10, "pac");
    if (!horde)
        return 1;
    for (int i = 0; i < 10; i++)
    {
        horde[i].announce();
    }
    
    delete [] horde;
    
    return (0);
}