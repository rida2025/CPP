/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:09:19 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/10 17:43:47 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
    //test 1
    std::vector<int> tab;
    tab.push_back(1);
    tab.push_back(2);
    tab.push_back(3);
    tab.push_back(4);
    tab.push_back(5);
    tab.push_back(6);
    easyfind(tab, 3);
    easyfind(tab, 9);
    return 0;
}