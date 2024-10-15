/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-jira <mel-jira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:35:10 by mel-jira          #+#    #+#             */
/*   Updated: 2024/05/03 17:36:15 by mel-jira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"
# include "Character.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include "MateriaSource.hpp"

// void f()
// {
//     system("leaks main");
// }

// int main()
// {
//     atexit(f);
    
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
    
//     ICharacter* me = new Character("me");
    
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     // me->equip(tmp);
//     // me->equip(tmp);

//     // delete tmp;
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // delete tmp;
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // delete tmp;
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // delete tmp;
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // delete tmp;
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // delete tmp;
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // delete tmp;
//     me->unequip(1);
//     me->unequip(1);
    
//     ICharacter* bob = new Character("bob");
    
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
    
//     return 0;
// }

int main()
{
    // atexit(f);
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    return 0;
}