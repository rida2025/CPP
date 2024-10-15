/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:53:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/24 09:11:36 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap MMXV("reda");
    ScavTrap A("cat");
    ScavTrap B("dog");
    ScavTrap C("wolf");
    ScavTrap D("lion");
    ScavTrap X("mouse");
    ClapTrap test("test");

    X.attack("reda");
    std::cout << test.get_Hit_points() << std::endl;
    test.takeDamage(20);
    std::cout << test.get_Hit_points() << std::endl;
    test.takeDamage(20);
    std::cout << "clear                           " << std::endl;

    
    return 0;
}