/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:53:13 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/23 11:59:36 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap MMXV("reda");
    ClapTrap A("cat");
    ClapTrap B("dog");
    ClapTrap C("wolf");
    ClapTrap D("lion");

    MMXV.attack("cat");
    MMXV.attack("dog");
    MMXV.attack("wolf");
    MMXV.attack("lion");

    
    return 0;
}