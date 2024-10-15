/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:53:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/24 10:24:49 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    
    FragTrap test("cat");

    std::cout << "energy =" << test.get_Energy_point() << std::endl;
    test.attack("dog");
    std::cout << "energy =" << test.get_Energy_point() << std::endl;
    std::cout << "hit point =" << test.get_Hit_points() << std::endl;
    test.takeDamage(20);
    std::cout << "hit point =" << test.get_Hit_points() << std::endl;
    test.beRepaired(22);
    std::cout << "hit point =" << test.get_Hit_points() << std::endl;
    std::cout << "energy =" << test.get_Energy_point() << std::endl;
    
    return 0;
}