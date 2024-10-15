/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:11:53 by mel-jira          #+#    #+#             */
/*   Updated: 2024/04/22 11:01:07 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(10, 0);
    Point c(5, 10);
    Point point(5, 5);
    if (bsp(a, b , c, point))
        std::cout << "its inside" << std::endl;
    else
        std::cout << "its outside or in the edge" << std::endl;
    return (0);
}
