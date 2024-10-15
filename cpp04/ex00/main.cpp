/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:30:05 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:36:38 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// void func()
// {
//     system("leaks main");
// }

int main()
{
    // atexit(func);
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound(); //will output the animal sound!
    
    const WrongAnimal* test1 = new WrongAnimal();
    const WrongAnimal* test2 = new WrongCat(); 
    std::cout << test1->getType() << " " << std::endl;
    std::cout << test2->getType() << " " << std::endl;
    test1->makeSound(); //will output the WrongAnimal!
    test2->makeSound(); //will output the WrongAnimal!
    
    delete meta;
    delete j;
    delete i;
    delete test1;
    delete test2;
    
    return 0;
}