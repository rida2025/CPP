/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:35:23 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/21 18:02:03 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int ft_strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return i;
}
 
int main(int argc, char **argv){
    if (argc == 2 && ft_strlen(argv[1]) > 0){
        rpn(argv[1]);
    }
    else
    {
        std::cerr << "Error" << std::endl;
    }
    return 0;
}
