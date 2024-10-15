/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 08:16:44 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/22 08:01:43 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
 
int main(int argc, char **argv){
    if (argc == 2){
        BinanceCryptoExchange((std::string)argv[1]);
    }
    else
    {
        std::cout << "Error: could not open file."<< std::endl;
    }
    return (0);
}
