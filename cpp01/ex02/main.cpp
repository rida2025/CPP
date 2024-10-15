/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:45:54 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/02 23:51:26 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptrstr = &str;
    std::string& refstr = str;
    
    std::cout << &str << std::endl;
    std::cout << ptrstr << std::endl;
    std::cout << &refstr << std::endl;

    std::cout << str << std::endl;
    std::cout << *ptrstr << std::endl;
    std::cout << refstr << std::endl;
    
    return (0);
}