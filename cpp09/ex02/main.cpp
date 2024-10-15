/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:53:00 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/21 10:54:55 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
    if (argc > 1){
        if (parse(argv)){
            std::cerr << "Error" << std::endl;
            return 1;
        }
        start(argv);
    }
    return 0;
}

