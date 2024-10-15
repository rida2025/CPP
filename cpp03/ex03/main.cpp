/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:53:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/25 19:36:42 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap m("mohammed");

    std::cout << m.get_Hit_points() << std::endl;
    std::cout << m.get_Energy_point() << std::endl;
    std::cout << m.get_Attack_damage() << std::endl << std::endl << std::endl;
    m.whoAmI();
    ScavTrap b("b");
    FragTrap a("a");
    m.attack("ss");
    a.attack("ss");
    b.attack("ss");
    return 0;
}