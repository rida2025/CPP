/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:05 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:36:22 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// void f()
// {
//     system("leaks main");
// }

int main()
{
    // Animal test;
    
    // Animal test2 = Dog();

    // atexit(f);
    Animal *animals[100];
    for (int i = 0; i < 50; i++)
    {
        animals[i] = new Dog();
    }
    for (int j = 50;j < 100; j++)
    {
        animals[j] = new Cat();
    }
    
    for (int x = 0; x < 100; x++)
    {
        delete animals[x];
    }
    return 0;
}
