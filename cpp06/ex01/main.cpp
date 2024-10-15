/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:10:00 by mel-jira          #+#    #+#             */
/*   Updated: 2024/07/07 16:06:08 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void){
    //Serialization test();
    Data *test1 = new Data();
    test1->setNumber(75);
    uintptr_t loc = 0;
    std::cout << loc << std::endl;
    loc = Serialization::serialize(test1);
    std::cout << loc << std::endl;
    
    Data *mic = Serialization::deserialize(loc);
    std::cout << mic << std::endl;
    std::cout << mic->getNumber() << std::endl;
    delete test1;
    return 0;
}